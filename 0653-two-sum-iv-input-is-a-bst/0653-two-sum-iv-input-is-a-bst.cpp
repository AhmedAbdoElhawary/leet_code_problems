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
    unordered_set<int> s;
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        
        if(s.find(root->val)!=s.end()){
            return true;
        }
        s.insert(k - root->val);
        bool a=findTarget(root->left,k);
        bool b=findTarget(root->right,k);
        
        return a||b;
    }
};