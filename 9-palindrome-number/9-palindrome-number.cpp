class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long rev=0;
        long num=x;
        while(x!=0){
            long div= x%10;
            rev=rev*10 + div;
            x=x/10;
        }
        return num==rev;
    }
};