#include<bits/stdc++.h>
using namespace  std;

vector<vector<int>> setMatrix0(vector<vector<int>>  &a){
    int n =a.size();
    int m = a[0].size();
    vector<int> row(n,0) , col(m,0);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(a[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                a[i][j] = 0;
            }
        }
    }
    return a;
}

int main(){
    vector<vector<int>> a = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
    vector<vector<int>> ans = setMatrix0(a);
    for(auto row: ans){
        for(auto x: row){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}