class Solution {
public:
    int maxArea(vector<int>& height) {
        int result=0;
        int leftIndex=0;
        int rightIndex=height.size()-1;

        while(leftIndex<rightIndex){
            if(height[leftIndex] < height[rightIndex]){
                int length=rightIndex-leftIndex;
                int t=length * height[leftIndex++];
                result=max(t,result);
            }else{
                int length=rightIndex-leftIndex;
                int t=length * height[rightIndex--];
                result=max(t,result);
            }
        }
        return result;
    }
};