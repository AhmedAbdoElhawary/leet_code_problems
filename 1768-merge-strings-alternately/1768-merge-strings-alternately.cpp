class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int size1=word1.size();
        int size2=word2.size();
        int i=0,j=0;
        for(int t=0;i<size1 || j<size2;t++){
            if(j >= size2){
                result+=word1[i++];
                continue;
            }else if(i >= size1){
                result+=word2[j++];
                continue;
            }
            if(!(t%2)) result+=word1[i++];
            else result+=word2[j++];
            
        }
        return result;
    }
};