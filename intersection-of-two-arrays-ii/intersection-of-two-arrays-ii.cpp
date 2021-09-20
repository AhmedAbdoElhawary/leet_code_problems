class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        for(int i=0,j=0;i<nums1.size()&&j<nums2.size();){
            nums1[i]==nums2[j]?
             result.push_back(nums1[i]),i++,j++
            :nums1[i]<nums2[j]?
             i++
            :j++;
        }
        return result;
    }
};