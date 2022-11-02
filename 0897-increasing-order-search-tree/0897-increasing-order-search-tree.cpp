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
    TreeNode* oneLine=new TreeNode();
    TreeNode* findSort(TreeNode* root){
        if(!root) return NULL;
        
        findSort(root->left);
        
        TreeNode* temp=new TreeNode();
        temp->val=root->val;
        oneLine->right=temp;
        oneLine= oneLine->right;
        
        findSort(root->right);
        
        return oneLine;
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* t=oneLine;
        findSort(root);
        return t->right;
    }
};