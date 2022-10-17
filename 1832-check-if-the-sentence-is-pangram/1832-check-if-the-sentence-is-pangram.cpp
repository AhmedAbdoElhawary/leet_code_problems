class Solution {
public:
    bool checkIfPangram(string s) {
        map<char,bool> characters={};
        string letter="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<letter.size();i++){
            characters[letter[i]]=false;
        }
        
        int num=26;
        for(int i=0;i<s.size();i++){
            if(!characters[s[i]]){
                characters[s[i]]=true;
                num--;
            }
        }
        return num<=0;
    }
};