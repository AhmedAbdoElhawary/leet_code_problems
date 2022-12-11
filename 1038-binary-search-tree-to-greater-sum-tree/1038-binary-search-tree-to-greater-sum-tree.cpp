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
    int sum=0;
    void rec(TreeNode* root) {
        if(!root) return;
        rec(root->right);
        root->val+=sum;
        sum=root->val;
        rec(root->left);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        rec(root);
        return root;
    }
};