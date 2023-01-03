class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        char minLetter='a';
        int result=0;
        for(int i=0;i<strs[0].size();i++){
            minLetter='a';
            for(int j=0;j<strs.size();j++){
                char tempLetter=strs[j][i];
                int n=tempLetter - minLetter;
                if(n < 0){
                    result++;
                    break;
                }
                minLetter=tempLetter;
            }
            
        }
        
        return result;
    }
};
