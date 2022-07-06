class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> map_s;
        map<char,char> map_t;

        for(int i=0;i<s.size();i++){
           auto key_s = map_s.find(s[i]);  
           auto key_t = map_t.find(t[i]);  

           if(key_s == map_s.end()&&key_t == map_t.end()){
             map_s[s[i]]=t[i];
             map_t[t[i]]=s[i];
           }else{
             if(key_s->first!=s[i]||key_s->second!=t[i]||key_t->first!=t[i]||key_t->second!=s[i])
               return false;
           }
        }
      return true;
    }
};