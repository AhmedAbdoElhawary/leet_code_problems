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
    int rec(TreeNode* root,int i) {
        if(!root) return -1;
        int l=rec(root->left,i+1);
        int r=rec(root->right,i+1);
        if(l == -1 && r == -1) return i;
        else if(l == -1) return r;
        else if(r == -1) return l;
        return min(l,r);
    }
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        return rec(root,1);
    }
};