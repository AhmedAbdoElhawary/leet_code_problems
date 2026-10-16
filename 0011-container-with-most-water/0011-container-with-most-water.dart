class Solution {
  int maxArea(List<int> height) {
    int output=0;
    for(int i=0,j=height.length-1; i < j ;){
        final hI=height[i];
        final hJ= height[j];
        final diff=j-i;

        final int temp;
        if(hI<hJ){
            temp=diff*hI;
            i++;
        }else{
            temp=diff*hJ;
            j--;
        }

        if(output < temp) output=temp;

    }
    return output;
  }
}