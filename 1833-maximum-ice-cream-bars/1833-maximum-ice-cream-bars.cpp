class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int numOfIce=0;
        int sum=0;
        
        for(int i=0;i<costs.size();i++){
            int t=costs[i]+sum;
            if(t > coins) break;
                sum=t;
                numOfIce++;
        }
        return numOfIce;
    }
};