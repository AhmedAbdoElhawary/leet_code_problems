class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int result=nums[0];
        for(int i=1;i<nums.size();i++){
            int n=nums[i];
            sum=n>n+sum?n:sum+n;
            if(result<sum) result=sum;
        }
        return result;
    }
};