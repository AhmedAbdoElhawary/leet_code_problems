class Solution {
  List<int> twoSum(List<int> numbers, int target) {
    for(int i=0, j=numbers.length-1; i<j; ){
        final sum=numbers[i] + numbers[j];
        if(sum == target) return [i+1, j+1];
        if(sum > target){
            j--;
        }else{
            i++;
        }
    }

    return [0,0];

  }
}