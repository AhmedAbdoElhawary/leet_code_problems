class Solution {
public:
    int firstUniqChar(string s) {
    set<char>w;
    map<char,int>m;
    for(int i=0;i<s.size();i++){
      if(w.find(s[i])!=w.end())
        m.erase(s[i]);
      else{
        w.insert(s[i]);
        m[s[i]]=i;
      }
    }
    int result=-1;
        for (auto itr = m.begin(); itr != m.end(); ++itr){
            if(result==-1||result> itr->second)
                result=itr->second;
        }
    return result;
    }
};