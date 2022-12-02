
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
private:
    int helper(string& data) {
        int pos = data.find('|');
        int val = stoi(data.substr(0,pos));
        data = data.substr(pos+1);
        return val;
    }
    TreeNode* des(string& data) {
        if(data[0]=='N'){
            if(data.size() > 1) data = data.substr(2);
            return nullptr;
        }
        
        TreeNode* temp=new TreeNode(helper(data));
        temp->left=des(data);
        temp->right=des(data);
        return temp;
    }
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "N";
        string v=to_string(root->val);
        string s1=serialize(root->left);
        string s2=serialize(root->right);
        return v+"|"+s1+"|"+s2;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        return des(data);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));