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
    int result=0;
    void rec(TreeNode* root, int low, int high) {
        if(!root) return;
        int val=root->val;
        bool checkLow=val >= low;
        bool checkHigh=val <= high;
        if(checkLow && checkHigh) result+=val;
        rec(root->left,low,high);
        rec(root->right,low,high);

    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        rec(root,low,high);
        return result;
    }
};