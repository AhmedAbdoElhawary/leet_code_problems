class Solution {
  int maxDistance(List<int> colors) {
    int max=0;
    final end=colors.length-1;
    
    for(int i=0,j=end;i<j;){

        if(colors[i] != colors[j] && j-i > max) max=j-i;
        if(colors[end] != colors[j] && end-j > max) max=end-j;

        j--;
    }

    return max;
  }
}