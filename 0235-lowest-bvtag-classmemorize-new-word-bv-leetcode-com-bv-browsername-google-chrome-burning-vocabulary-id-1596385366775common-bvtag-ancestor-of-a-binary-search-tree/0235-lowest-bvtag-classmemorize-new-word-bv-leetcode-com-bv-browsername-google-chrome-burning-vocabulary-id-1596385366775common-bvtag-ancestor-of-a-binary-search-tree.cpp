/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        
        int val=root->val;
        int valP=p->val;
        int valQ=q->val;
        bool check=valP < valQ?val > valP && val < valQ
            :val < valP && val > valQ;
        if(val == valP || val== valQ) return root;
        if(check) return root;
        
        TreeNode* a=lowestCommonAncestor(root->left,p,q);
        TreeNode* b=lowestCommonAncestor(root->right,p,q);
        
        return !a?b:a;
    }
};