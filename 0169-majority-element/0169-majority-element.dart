class Solution {
  int majorityElement(List<int> nums) {
    nums.sort();

    (int count,int element) maxNumber=(0,0);
    int currentCount=0;

    for(int i=0;i<nums.length;i++){
        final next=i+1;
        if(next == nums.length || (next < nums.length && nums[next] != nums[i])){
            if(maxNumber.$1 <= currentCount){
                maxNumber=(currentCount,nums[i]);
            }
            currentCount=0;
            continue;
        }

        currentCount++;
    }
    return maxNumber.$2;
    }
}