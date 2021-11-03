class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
      map<int,char> map={};

      for(int  i=0;i<str.size();i++){
          if(str[i].size()==0&&i!=0)
              return "";
        for(int j=0;j<str[i].size();j++){
          if(i==0)
            map[j]=str[i][j];
          else{
            if(map[j]!='/'){
              if(str[i][j]!=map[j]&&j==0)
                  return "";
              else if(str[i][j]!=map[j]){
                map[j]='/';
                break;
              }
                else if(j+1>=str[i].size())
                    map[j+1]='/';
            }else 
              break;
          }
        }
      }
        
      string result="";
      for(int i=0;i<map.size()&&map[i]!='/';i++)
        result+=map[i];

      return result;
    }
};