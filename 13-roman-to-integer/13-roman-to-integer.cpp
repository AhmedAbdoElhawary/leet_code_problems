class Solution {
public:
    int romanToInt(string s) {
        map<char,int> map={
    {'I',1},
    {'V',5},
    {'X',10},
    {'L',50},
    {'C',100},
    {'D',500},
    {'M',1000}};

int result=0;
    for(int i=0;i<s.size();i++){
      if(i+1<s.size()){
        if(map[s[i+1]]>map[s[i]]){
          result+=map[s[i+1]]-map[s[i]];
          i++;
        }
        else 
          result+=map[s[i]];
      }
      else
        result+=map[s[i]];
    }
        return result;
    }
};