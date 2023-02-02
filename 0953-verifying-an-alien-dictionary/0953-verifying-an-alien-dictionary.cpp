class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> m;
        
        for(int i=0;i<order.size();i++){
            m.insert({order[i],i+1});
        }
        
        for(int i=0;i<words.size()-1;i++){
            string word1=words[i];
            string word2=words[i+1];
            
            
            for(int j=0;j<word1.size();j++){
                int n1=m[word1[j]],n2=m[word2[j]];
                if(n1==n2) continue;
                if(n2 < n1) return false;
                break;
            }
            
        }
        return true;
    }
};