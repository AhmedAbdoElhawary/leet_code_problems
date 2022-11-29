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
    bool sumLeft(TreeNode* root,bool isThatLeft){
        if(!root) return true;
        bool l=sumLeft(root->left,true);
        bool r=sumLeft(root->right,false);
        if(isThatLeft&&l&&r) sum+=root->val;
        return false;
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        sumLeft(root,false);
        return sum;
    }
};