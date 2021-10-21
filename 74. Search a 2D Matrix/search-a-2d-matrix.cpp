class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool check=false;
        for(int i=0;i<matrix.size();i++){
          int a=matrix[i][0];
          int z=matrix[i][matrix[i].size()-1];
          if(target>=a&&target<=z){
            for(int j=0;j<matrix[i].size();j++){
              if(matrix[i][j]==target)
                check=true;
            }
          }
        }
        return check;
    }
};