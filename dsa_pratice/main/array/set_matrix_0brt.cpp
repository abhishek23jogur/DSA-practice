#include<bits/stdc++.h>
using namespace  std;

void markRow(vector<vector<int>>  &a,int i,int m){
    for(int j=0;j<m;j++){
        if(a[i][j]!=0){
            a[i][j]= -1;
        }
    }
}

void markCol(vector<vector<int>>  &a,int j,int n){
    for(int i=0;i<n;i++){
        if(a[i][j]!=0){
            a[i][j]= -1;
        }
    }
}


vector<vector<int>> setMatrix0(vector<vector<int>>  &a){
    int n =a.size();
    int m = a[0].size();
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(a[i][j]==0){
                markRow(a,i,m);
                markCol(a,j,n);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]== -1){
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