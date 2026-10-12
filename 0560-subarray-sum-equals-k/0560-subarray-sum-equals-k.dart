class Solution {
  int subarraySum(List<int> nums, int k) {
    int max=0;
    for(int i=0;i<nums.length;i++){
        int curr=nums[i];
        for(int j=i+1;j<nums.length;j++){
            final move=nums[j];
            final temp=curr+move;
            if(temp==k){
                max++;
            }
            curr=temp;
        }

        if(nums[i] == k) max++;
    }

    return max;
  }
}