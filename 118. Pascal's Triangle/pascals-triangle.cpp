class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>>result;
        for(int i=0;i<num;i++){
            vector<int> a;
            for(int j=0;j<=i;j++){
                if(j==i||j==0)
                    a.push_back(1);
                else{
                    a.push_back(result[i-1][j-1]+result[i-1][j]);
                }
            }
            result.push_back(a);
        }
        return result;
    }
};
