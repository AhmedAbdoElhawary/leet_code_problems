class Solution {
public:
    int countSegments(string s) {
        int count =0;
        for(int i=0;i<s.size();i++){
             if((i==0 && s[i]!=' ') || (s[i]!=' ' && s[i-1]==' ')) count++;
        }
        return count;
    }
};