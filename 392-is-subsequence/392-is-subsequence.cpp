class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0)
            return true;
        int s_index=0;
        
        for(int i=0;i<t.size();i++){
            if(s[s_index]==t[i]){
                s_index++;
                continue;
            }
        }
        return s_index>s.size()-1?true:false;
    }
};