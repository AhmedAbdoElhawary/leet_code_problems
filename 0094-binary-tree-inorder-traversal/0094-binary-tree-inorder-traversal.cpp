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
public:
   
    void solve(TreeNode* root,vector<int>& sum) {
        if(root==NULL) return ;
        
        solve(root->left,sum);
        sum.push_back(root->val);
        solve(root->right,sum);
        
        return ;
    }
    vector<int> inorderTraversal(TreeNode* root) { 
        vector<int> sum;
        solve(root,sum);
        return sum;
    }
};