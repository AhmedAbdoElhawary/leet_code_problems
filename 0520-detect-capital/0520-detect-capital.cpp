class Solution {
private:
    bool lowerCase(char c){
        return c >='a' && c <='z';
    }
public:
    bool detectCapitalUse(string w) {
        int size=w.size();
        if(size == 0) return true;
        
        int i=size-1;
        char c1=w[i];
        bool upper= !lowerCase(c1);
        for(;i > 0;i--){
            if(upper && lowerCase(w[i])) return false;
            else if(!upper && !lowerCase(w[i])) return false;
        } 
            
        return !(upper && lowerCase(w[i]));
        
    }
};