class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>sum;
        
        int i=0,j=0;
        while(m!=0&&n!=0){
            if(nums1[i]<nums2[j]){
                sum.push_back(nums1[i]);
                i++;
                m--;
            }else{
                sum.push_back(nums2[j]);
                j++;
                n--;
            }
        }

        while(m!=0){
            sum.push_back(nums1[i]);
            i++;
            m--;
        }
        while(n!=0){
            sum.push_back(nums2[j]);
            j++;
            n--;
        }
        nums1=sum;
    }
};