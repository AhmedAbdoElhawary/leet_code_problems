class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>map;
        for(int i=0;i<nums.size();i++){
            int index=map[nums[i]];
            if(index==0){
                map[nums[i]]=i+1;
            }else{
                int dis=index-1-i;
                dis=abs(dis);
                if(dis<=k) return true;
                map[nums[i]]=i+1;
            }
        }
        return false;
    }
};