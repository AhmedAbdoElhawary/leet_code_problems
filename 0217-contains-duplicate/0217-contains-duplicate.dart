class Solution {
  bool containsDuplicate(List<int> nums) {
    final Map<int,bool> hash={};
    for(final num in nums){
        if(hash[num]==true) return true;
        hash[num]=true;
    }
    return false;
  }
}