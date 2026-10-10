class Solution {
  List<int> productExceptSelf(List<int> nums) {
    final List<int> results=[];
    int? total;
    int countOfZero=0;
    for (final n in nums){
        if(n!=0) total = (total??1) * n;
        if(n==0) countOfZero++;
    }

    if(total == null || countOfZero > 1) return List.filled(nums.length,0);
    
    for(int i=0;i<nums.length;i++){
        if(nums[i] !=0 && countOfZero==1){
            results.add(0);
        }else if(nums[i] ==0){
            results.add(total);
        }else{
        results.add(total~/nums[i]);
        }
    }

    return results;
  }
}