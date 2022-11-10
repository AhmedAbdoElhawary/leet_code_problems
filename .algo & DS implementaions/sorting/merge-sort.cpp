#include<bits/stdc++.h>
using namespace std;

class MergeSort{
    private:
         vector<int> mregeWithoutDC(vector<int> a,vector<int> b){
            vector<int> result;
            for(int i=0,j=0;i<a.size()||j<b.size();){
                if(i>=a.size()){
                    result.push_back(b[j++]);
                    continue;
                }else if(j>=b.size()){
                    result.push_back(a[i++]);
                    continue; 
                }
                if(a[i] < b[j]){
                    result.push_back(a[i++]);
                }
                else{
                    result.push_back(b[j++]);
                }
                
            }
            return result;
        } 
        static void mrege(vector<int> &x,int s1,int s2,int e1,int e2){
            vector<int> result;
            int s=s1;
            while(s1<=s2||e1<=e2){
                if(s1>s2){
                    result.push_back(x[e1++]);
                    continue;
                }else if(e1>e2){
                    result.push_back(x[s1++]);
                    continue;
                }
                if(x[s1] < x[e1]){
                    result.push_back(x[s1++]);
                }else{
                    result.push_back(x[e1++]);
                }
            }
            for(int i=0;i<result.size();i++,s++){
                x[s]=result[i];
            }
            
        }     
    public:
         vector<int> listSortWithoutDivideAndConquer(vector<int> x){
            if(x.size()==1) return x;
            
            vector<int> a,b;
            int i=0;
            for(;i<x.size()/2;i++)
                a.push_back(x[i]);
            for(;i<x.size();i++)
                b.push_back(x[i]);
            
            a=listSortWithoutDivideAndConquer(a);
            b=listSortWithoutDivideAndConquer(b);

            return mregeWithoutDC(a,b);
        }

        void listSort(vector<int> &x,int s,int e){
            if(s==e) return;
            
            int s1=s,s2=(s+e)/2,e1=s2+1,e2=e;
            
            listSort(x,s1,s2);
            listSort(x,e1,e2);

            
            return mrege(x,s1,s2,e1,e2);
        }
};
int main(){
    vector<int> x={5,2,7,49,3,2,6,46,3,46,5,27,4,5,87,6,6,3,4,5,7,6,58,56,3,42,1,257,6,85,4,6,56,7,76,8,6,74,35};
    MergeSort().listSort(x,0,(int)x.size()-1);
    for(int i=0; i<x.size(); i++)
        cout<<x[i]<<endl;
    return 0;
}