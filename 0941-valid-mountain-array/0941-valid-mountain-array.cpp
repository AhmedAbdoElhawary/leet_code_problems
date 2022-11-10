class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        char check='n';
        int num=arr[0];
        for(int i=1;i<arr.size();i++){
            if(check!='f' && num < arr[i]){
            num=arr[i];
            check='t';
            continue;
            }
            if(check=='t')check='f';

            if(check=='f' && num > arr[i]){
                num=arr[i];
                continue;
            }
            return false;
        }
        return check=='f'?true:false;
    }
};