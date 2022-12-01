class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=arr.size();
        int sTemp=s;
        int result=s/2;
        for(int i=result;i<s;){
            int v=arr[i];
            int vMin=arr[i-1];
            int vPlus=arr[i+1];
            if(v > vMin && v > vPlus){
                result=i;
                break;  
            }
            else if(v > vMin) i=(i+sTemp)/2;
            else{
                sTemp=i;
                i=i/2;
            } 
        }
        return result;
    }
};