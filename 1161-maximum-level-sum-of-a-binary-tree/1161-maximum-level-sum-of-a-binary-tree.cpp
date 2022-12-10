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
    int sum=1<<31;
    int level=0;
    void solve(TreeNode* root,vector<int>& arr,int i) {
        if(!root) return;
        
        if(arr.size() <= i) arr.push_back(root->val);
        else arr[i]+=root->val;
        
        solve(root->left,arr,i+1);
        solve(root->right,arr,i+1);

    }
public:
    int maxLevelSum(TreeNode* root) {
        vector<int> arr;
        solve(root,arr,0);
        
        for(int i=0;i<arr.size();i++){
            if(sum < arr[i]){
                sum=arr[i];
                level=i+1;
            }
        }
        return level;
    }
};

