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
    vector<int> result;
    void rec(TreeNode* root){
        if(root==NULL)
            return;
        result.push_back(root->val);
        rec(root->left);
        rec(root->right);
        
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        rec(root);
        return result;
    }
};