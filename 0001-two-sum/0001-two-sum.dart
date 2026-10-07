class Solution {
  List<int> twoSum(List<int> nums, int target) {
    if(nums.length<2) return [];

    final Map<int,int> hashMap={};

    for(int i=0;i<nums.length; i++){
        final t=target - nums[i];
        final newI=hashMap[t];

        if(newI!=null && i!= newI) return [i,newI];
        hashMap[nums[i]]=i;

    }
    return [];
  }
}