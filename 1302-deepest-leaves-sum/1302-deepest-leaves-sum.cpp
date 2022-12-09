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
    int tempSum=0;
    int solve(TreeNode* root,int i,int& deepestI) {
        if(!root) return -1;
        int l=solve(root->left,i+1,deepestI);
        int r=solve(root->right,i+1,deepestI);
        if(l==-1 && r==-1){
            if(deepestI == i || deepestI==0) tempSum+=root->val;
            else if(deepestI < i) tempSum=root->val;
            if(deepestI <= i) deepestI=i;
        }
        return root->val;
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        int deepestI=0;
        solve(root,0,deepestI);
        return tempSum;
    }
};