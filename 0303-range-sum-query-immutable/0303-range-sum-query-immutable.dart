class NumArray {
  late List<int> _nums;
  NumArray(List<int> nums) {
    _nums=nums;
  }
  
  int sumRange(int left, int right) {
    int num=0;
    for(int i=left;i<=right;i++){
       num = num + _nums[i];

    }
    return num;
  }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = NumArray(nums);
 * int param1 = obj.sumRange(left,right);
 */