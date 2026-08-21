#include<bits/stdc++.h>
using namespace  std;

vector<vector<int>> setMatrix0(vector<vector<int>>  &a){
    int n =a.size();
    int m = a[0].size();
    int col0 = 1;
    //vector<int> row(n,0) , col(m,0);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(a[i][j]==0){
                a[i][0]=0;
                if(j!=0){
                    a[0][j]=0;
                }
                else{
                    col0 = 0;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]!=0){
                if(a[0][j] == 0 || a[i][0] == 0){
                    a[i][j] = 0;
                }
            }
        }
    }
    if(a[0][0]==0){
        for(int j = 0;j<m;j++) a[0][j] = 0;
    }
    if(col0 == 0){
        for(int i=0;i<n;i++){
            a[i][0]=0;
        }
    }
    return a;
}  



int main(){
    vector<vector<int>> a = {{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}};
    vector<vector<int>> ans = setMatrix0(a);
    for(auto row: ans){
        for(auto x: row){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}