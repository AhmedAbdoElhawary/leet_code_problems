/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    void rec(Node* root,vector<vector<int>>& arr,int i){
        if(!root) return;
        bool check=i < arr.size();
        vector<int> temp;
        if(check) temp=arr[i];
        temp.push_back(root->val);
        if(check) arr[i]=temp;
        else arr.push_back(temp);
        for(auto r : root->children){
            rec(r,arr,i+1);
        }

    }
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> r;
        rec(root,r,0);
        return r;
    }
};