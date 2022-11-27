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
    bool rec(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        else if(!p || !q) return false;

        if(p->val != q->val) return false;
        
        bool left=rec(p->left,q->left);
        bool right=rec(p->right,q->right);
        return left&&right;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return rec(p,q);
    }
};