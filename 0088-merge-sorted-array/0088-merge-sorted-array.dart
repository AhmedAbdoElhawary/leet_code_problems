class Solution {
  void merge(List<int> nums1, int m, List<int> nums2, int n) {
    if(n==0)return;

    for(int i=m-1,k=m+n-1,j=n-1;j>=0;){
        if(i<0 || nums1[i]<=nums2[j]){
            nums1[k]=nums2[j];
            j--;
            k--;
        }else{
            nums1[k]=nums1[i];
            k--;
            i--;
        }
    }
    
  }
}