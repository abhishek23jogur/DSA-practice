#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate_90(vector<vector<int>> &a){
    int n = a.size();
    int m = a[0].size();
    vector<vector<int>> ans(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[j][n-1-i] = a[i][j];
        }
    }
    return ans;
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