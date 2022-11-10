class Solution {
public:
    string intToRoman(int num) {

        vector<pair<int, string>> sy =      {{1000, "M"},{900, "CM"},
                                            {500, "D"},{400, "CD"},
                                            {100, "C"},{90, "XC"},
                                            {50, "L"},{40, "XL"},
                                            {10, "X"},{9, "IX"},
                                            {5, "V"},{4, "IV"},
                                            {1, "I"}};
        string text="";
        int i=0;
        while(num!=0){
            int j=i;
            for(;num<sy[j].first;j++);
            i=j;
            text+=sy[j].second;
            num-=sy[j].first;
        }
        return text;
    }
};
