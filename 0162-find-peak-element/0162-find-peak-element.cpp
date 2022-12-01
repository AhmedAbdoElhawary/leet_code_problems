class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int result=0;
        int s=nums.size();
        for(int i=1;i<s;i++){
            int n=nums[i];
            bool check1=false,check2;
            check2=n > nums[i-1];
            if(i+1!=s) check1=n >nums[i+1];
            else if(result==0 & check2) result=i; 
            if(check2 && check1) result=i;
        }
        return result;
    }
};