class Solution {
public:
    int addDigits(int n) {
        int temp=n;
        while(temp > 9){
            int num=0;
            while(temp!=0){
                int s=temp%10;
                num+=s;
                temp/=10;
            }
            temp=num;
        }
        return temp;
    }
};