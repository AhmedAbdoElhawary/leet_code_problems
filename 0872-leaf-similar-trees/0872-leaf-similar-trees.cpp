/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    stack<int> st;
    TreeNode* recRoot1(TreeNode* root){
        if(!root) return NULL;
        TreeNode* left=recRoot1(root->left);
        TreeNode* right=recRoot1(root->right);
        
        if(!left && !right) st.push(root->val);
        return root;
    }
    TreeNode* recRoot2(TreeNode* root,bool& result){
        if(!root) return NULL;
        TreeNode* right=recRoot2(root->right,result);
        TreeNode* left=recRoot2(root->left,result);
        
        if(!left && !right){
            if(st.empty() || root->val!=st.top()) result=false;
            st.pop();
        }
        return root;
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        bool result=true;
        recRoot1(root1);
        recRoot2(root2,result);
        return st.empty()?result:false;
    }
};