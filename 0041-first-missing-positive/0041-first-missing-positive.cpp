class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num=1;
        int s=nums.size();
        for(int i=0;i<s;i++){
            if((i+1<s && nums[i]==nums[i+1]) || nums[i] <= 0) continue;
            if(nums[i] !=num) break;
            num++;
        }
        return num;
    }
};