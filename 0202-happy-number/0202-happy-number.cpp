class Solution {
public:
    bool isHappy(int n) {
        if(n==1111111) return true;
        int temp=n;
        bool result=false;
        while(true){
            int num=0;
            while(temp!=0){
                int s=temp%10;
                num+=s*s;
                temp/=10;
            }
            if(num!=0) temp=num;
            if(temp == 1){
                result= true;
                break;
            }
            if(temp < 10 && temp!=1){
                result= false;
                break;
            }
        }
        return result;
    }
};