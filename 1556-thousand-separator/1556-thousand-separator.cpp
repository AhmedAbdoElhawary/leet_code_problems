class Solution {
public:
    string thousandSeparator(int n) {
        string format="";
        int q=n;
        for(int i=1;n!=0;i++){
            format= to_string(n % 10) + format;
            n=n/10;
            if(i%3==0&&n!=0)
                format="." + format;
            
        }
        return q==0?"0":format;
    }
};