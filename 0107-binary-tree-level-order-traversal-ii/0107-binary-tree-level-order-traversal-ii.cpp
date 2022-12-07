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
    void rec(TreeNode* root,vector<vector<int>>& arr,int i) {
        if(!root) return;
        
        if(arr.size() <= i) arr.push_back({root->val});
        else arr[i].push_back(root->val);
        
        rec(root->left,arr,i+1);
        rec(root->right,arr,i+1);

    }
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> arr;
        rec(root,arr,0);
        reverse(arr.begin(), arr.end());
        return arr;
    }
};