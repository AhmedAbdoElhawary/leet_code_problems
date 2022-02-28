class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set <int> sortedNum;
        map <int,int> mapOfNum;
        
        for(int i=0;i<nums.size();i++){
            if (sortedNum.find(target-nums[i]) != sortedNum.end()){
                return {mapOfNum[target-nums[i]],i};
            }
            sortedNum.insert(nums[i]);
            mapOfNum[nums[i]]=i;
        }
        
        return {};
    }
};