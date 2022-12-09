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
    vector<stack<int>> v;
    void reverse(TreeNode* root,int i) {
        if(!root) return;
        // if(i%2==1){
            if(v.size() > i-1) v[i-1].push(root->val);
            else{
                stack<int> temp;
                temp.push(root->val);
                v.push_back(temp);
            } 
        // }
        reverse(root->left,i+1);
        reverse(root->right,i+1);
    }
    void solve(TreeNode* root,int i) {
        if(!root) return;
        if(i%2==1){
            root->val=v[i-1].top();
            v[i-1].pop();
        }
        solve(root->left,i+1);
        solve(root->right,i+1);
        
    }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        reverse(root,0);
        solve(root,0);
        return root;
    }
};