class Solution {
  void moveZeroes(List<int> nums) {
    if(nums.length<=1) return;

    for(int i=0,j=1;j<nums.length;){
        if(nums[i]==0 && nums[j]!=0){
            nums[i]=nums[j];
            nums[j]=0;
        }
        if(nums[i]!=0) i++;
        j++;
    }
  }
}