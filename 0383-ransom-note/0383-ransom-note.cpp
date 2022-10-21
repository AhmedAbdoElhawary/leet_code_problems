class Solution {
public:
    bool canConstruct(string ran, string mag) {
        map<char,int> map;
        
        for(int i=0;i<mag.size();i++){
            map[mag[i]]++;
        }
        
        for(int i=0;i<ran.size();i++){
            int r=map[ran[i]]--;
            if(r<=0) return false;

        }

        return true;
    }
};