class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int num=nums[0];
        int repeat=0;
        for(int i=0;i<nums.size();i++){
            int c=m[nums[i]];
            m[nums[i]]=c+1;
            if(repeat < c+1){
                num=nums[i];
                repeat=c+1;
            }
        }
        return num;
    }
};