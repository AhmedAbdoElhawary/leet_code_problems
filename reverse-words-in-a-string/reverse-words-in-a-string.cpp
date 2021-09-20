class Solution {
public:
    string reverseWords(string s) {
              stringstream ss(s);
    string word;
    string m="";
    while (ss >> word) {
        m=word+" "+m;
    } 
    m.pop_back();
    return m;
    }
};
