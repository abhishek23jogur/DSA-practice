#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate_90(vector<vector<int>> &a){
    int n = a.size();
    //vector<vector<int>> ans(n,vector<int> (n));
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(a[j][i] ,a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(a[i].begin(),a[i].end());
    }
    return a;
}

int main(){
    vector<vector<int>> a = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<vector<int>> ans = rotate_90(a);
    for(auto row: ans){
        for(auto x: row){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}