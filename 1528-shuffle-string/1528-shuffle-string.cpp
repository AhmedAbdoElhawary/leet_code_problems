class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        string temp=s;
        for(int i=0;i<ind.size();i++){
            temp[ind[i]]=s[i];
        }
        return temp;
    }
};