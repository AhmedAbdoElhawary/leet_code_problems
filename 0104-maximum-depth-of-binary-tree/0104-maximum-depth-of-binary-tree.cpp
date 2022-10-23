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
    void sum(TreeNode* root,int& count,int s) {
        if(root==NULL){
            count=count>s?count:s;
            return;
        }
        sum(root->left,count,s+1);
        sum(root->right,count,s+1);

    }
    int maxDepth(TreeNode* root) {
        int count=0;
        sum(root,count,0);
        return count;
    }
};