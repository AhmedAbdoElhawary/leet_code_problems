class Solution {
  void sortColors(List<int> nums) {
    final len=nums.length;
    for(int i=0, mid=0, j=len-1; mid<=j ;){
        final m=nums[mid];

        if(m==0){
            nums[mid]=nums[i];
            nums[i]=m;
            i++;
            mid++;
        }else if(m==1){
            mid++;
        }else{
            nums[mid]=nums[j];
            nums[j]=m;
            j--;
        }
    }
  }
}