class Solution {
public:
    bool canConstruct(string ran, string mag) {
        map<char,int> map;
        
        for(int i=0;i<mag.size();i++){
            map[mag[i]]++;
        }
        
        for(int i=0;i<ran.size();i++){
            map[ran[i]]--;
        }
        for(auto m:map){
            if(m.second<0) return false;
        }
        return true;
    }
};