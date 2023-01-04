class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> map;
        for(auto n : tasks) map[n]++;
        int i=0;
        for(auto &m : map){
            int n=m.second;
            if(n == 1) return -1;
            while(n > 0)
                if(n-3 != 1 && n-3 >= 0) i++,n-=3;
                else if(n-2 != 1 && n-2 >= 0) i++,n-=2;
            
        }
        return i;
    }
};