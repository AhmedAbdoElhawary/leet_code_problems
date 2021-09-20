class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int small=prices[0];
        int large=prices[0];
        int result=0;
        for(int i=1;i<prices.size();i++){
            prices[i]<small?small=prices[i],large=0:large=prices[i];
            result<large-small?result=large-small:1;
        }
        return result<=0?0:result;
    }
};