class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int min_num=prices[0];
        int max_num=prices[0];
        int profit =0;
        for(int i=0;i<prices.size();i++){
            if(min_num>=prices[i]){
                min_num=prices[i];
                max_num=prices[i];
                // profit=0;
            }else{
               int num= prices[i]-min_num;
               profit=num>profit?num:profit;
            }
        }
        return profit;
    }
};