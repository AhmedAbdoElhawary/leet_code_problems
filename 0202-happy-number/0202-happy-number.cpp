class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        int temp=n;
        while(true){
            int num=0;
            while(temp!=0){
                int s=temp%10;
                num+=s*s;
                temp/=10;
            }
            temp=num;
            if(temp == 1) return true;
            if(set.find(temp)!=set.end()) return false;
            set.insert(temp);
        }
        return false;
    }
};