class Solution {
  double findMaxAverage(List<int> nums, int k) {
    double window = 0;

    for(int i=0;i<k;i++){
            window+=nums[i];
    }

    double max=window;

    for(int i=0,j=k;j<nums.length;i++,j++){
        window-=nums[i];
        window+=nums[j];
        if (window > max) max = window;
        }
    return max/k;
  }
}