class Solution {
  int maxProfit(List<int> prices) {
    int max=0;
    int minIndex=0;

    for(int i=0;i<prices.length;i++){
        final diff=prices[i] - prices[minIndex];

        if(diff < 0) minIndex = i;

        if(diff > max) max = diff;
    }
    
    return max;
  }
}