class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end());
        int result=1;
        int endPoint=INT_MAX;
        for(int i=0;i<p.size();i++){
            int startP=p[i][0];
            int endP=p[i][1];
            bool check1=endPoint < startP;

            if(check1){
                result++;
                endPoint=endP;
            }else{
               endPoint=min(endP,endPoint);
            }
        }
        return result;
    }
};