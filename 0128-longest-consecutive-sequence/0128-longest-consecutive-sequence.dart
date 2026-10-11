class Solution {
  int longestConsecutive(List<int> nums) {
    final toSet=nums.toSet();

    int max=0;
    for(final n in toSet){
        if(toSet.contains(n-1))continue;

        int temp=1;
        while(toSet.contains(n+temp))temp++;

        if(max<temp)max=temp;
    }

    return max;
  }
}