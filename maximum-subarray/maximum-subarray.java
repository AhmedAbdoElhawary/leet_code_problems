class Solution {
    public int maxSubArray(int[] nums) {
        int r=nums[0];
        int f=nums[0];
        for(int i=1;i<nums.length;i++){
            if(nums[i]>nums[i]+r){
                r=nums[i];
                if(f<r)
                    f=r;
            }
            else{
                r+=nums[i];
                if(f<r)
                    f=r;
            }
        }
        return f;
    }
}