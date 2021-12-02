class Solution {
public:
    void moveZeroes(vector<int>& s) {
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==0){
                s.erase(s.begin() + i);
                s.push_back(0);
                
            }
        }
    }
};