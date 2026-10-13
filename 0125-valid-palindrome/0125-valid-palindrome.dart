class Solution {
  bool isPalindrome(String s) {
    if(s.isEmpty) return true;

    for(int i=0,j=s.length-1;i<j;){
        int first=s[i].codeUnitAt(0);
        int end=s[j].codeUnitAt(0);

        // if upper make them lower
        if(first>=65 && first <= 90) first=first+32;
        if(end>=65 && end <= 90) end=end+32;


        final isFirstNum=first>=48 && first <= 57;
        final isEndNum=end>=48 && end <= 57;
        final isFirstLower=(first>=97 && first <= 122)||isFirstNum;
        final isEndLower=(end>=97 && end <= 122)||isEndNum;

        if(first == end){
            i++;j--;
            continue;
        }

        if(isFirstLower&&isEndLower) return false;

        if(!isFirstLower) i++;
        if(!isEndLower) j--;

    }
    return true;
  }
}