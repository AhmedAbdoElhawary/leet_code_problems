class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=nums[0];
        int left_sum=0;
        for(int i=1;i<nums.size();i++)sum+=nums[i];
        
        for(int i=0;i<nums.size();i++){
            if(i!=0)left_sum+=nums[i-1];
            sum-=nums[i];
            if(left_sum==sum) return i;
        }
        return -1;
    }
};