class Solution {
public:
    int arrangeCoins(int n) {
        int countOfPlaces=1;
        int i=0;
        for(;n!=0;i++){
            n-=countOfPlaces;
            if(n<0) return i;
            else countOfPlaces++;
        }
        return i;
    }
};