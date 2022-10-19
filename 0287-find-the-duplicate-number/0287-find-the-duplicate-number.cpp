class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
            if(set.size()<i+1)
                return nums[i];
        }
        return 0;
    }
};