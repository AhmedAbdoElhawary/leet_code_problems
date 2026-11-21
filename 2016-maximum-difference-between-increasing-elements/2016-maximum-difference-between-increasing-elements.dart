class Solution {
  int maximumDifference(List<int> nums) {
    int max=0;
    int minIndex=0;

    for(int i=0; i< nums.length ; i++){
        final diff=nums[i] - nums[minIndex];

        if(diff <= 0) minIndex=i;

        if(diff > max) max=diff;
    }

    return max==0?-1:max;
  }
}