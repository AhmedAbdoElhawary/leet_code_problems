class Solution {
  int minSubArrayLen(int target, List<int> nums) {
    int max = 0;
    int temp = 0;

    for(int i=0,j=0; j<nums.length;){
        int sum = temp + nums[j];

        if(sum < target) {
            j++;
            temp=sum;
            continue;
        }

        final len=j - i + 1;
        if(len == 1) return 1;
        if(max == 0 || max > len) max = len;
        temp =temp - nums[i];
        i++;
    }

    return max;
  }
}