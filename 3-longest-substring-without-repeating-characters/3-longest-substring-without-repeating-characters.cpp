class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        map<char, int> m;
        int count=0;
        int temp=0;
        // from start to end
        for(int i=0;i<s.length();i++){
            char l=s[i];
           if(m.find(l)==m.end()){
               m.insert({l,i});
               temp++;
           }else{
               i=m[l];
               m.clear();
               temp=0;
           }
           count=count<temp?temp:count;
        }
        return count;

    }
};