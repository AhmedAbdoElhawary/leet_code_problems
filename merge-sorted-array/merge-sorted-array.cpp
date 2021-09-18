class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int> result;
      for(int i=0,j=0;n>0||m>0;){
        if(m>0){
          if(nums2.size()==0||n==0||nums1[i]<nums2[j]){
            result.push_back(nums1[i]);
            i++;
            m--;
          }
          else{
            result.push_back(nums2[j]);
            j++;
            n--;
          }
        }
          else if(n>0){
            result.push_back(nums2[j]);
            j++;
            n--;
          }
      }
      nums1=result;
    }
};