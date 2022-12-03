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
    void rec(TreeNode* root,vector<vector<int>>& arr,int i){
        if(!root) return;
        bool check=i < arr.size();
        vector<int> temp;
        if(check) temp=arr[i];
        temp.push_back(root->val);
        if(check) arr[i]=temp;
        else arr.push_back(temp);
        rec(root->left,arr,i+1);
        rec(root->right,arr,i+1);
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> r;
        rec(root,r,0);
        return r;
    }
};