class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalLength=nums1.size()+nums2.size();
        int mid=totalLength/2;
        vector<double> total;
        int i=0,j=0;
        for(;i<nums1.size()||j<nums2.size();){
            if(total.size()==mid+1)
                break;
            if(i>=nums1.size()){
                total.push_back(nums2[j++]);
                continue;
            }
            if(j>=nums2.size()){
                total.push_back(nums1[i++]);
                continue;
            }
            if(nums1[i]>nums2[j]){
                total.push_back(nums2[j++]);
            }else{
                total.push_back(nums1[i++]);
            }
        }
        double result;
        bool odd=totalLength%2;
        if(odd){
            result=total[mid]/1;
        }else{
            result=(total[mid]+total[mid-1])/2;
        }
        return result;
        
    }
};