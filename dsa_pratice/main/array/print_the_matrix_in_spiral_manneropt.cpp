#include<bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> &a){
    int n = a.size();
    int m = a[0].size();
    vector<int> ans;
    int left = 0, right = m-1, top = 0, bot = n-1;
    while(top<=bot && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(a[top][i]);
        }
        top++;
        for(int i=top;i<=bot;i++){
            ans.push_back(a[i][right]);
        }
        right--;
        if(top<=bot){
            for(int i=right;i>=left;i--){
                ans.push_back(a[bot][i]);
            }
            bot--;
        }
        if(left<=right){
            for(int i=bot;i>=top;i--){
                ans.push_back(a[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> a = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
    vector<int> ans = spiral(a);
    for(auto x: ans){
        cout<<x<< " ";
    }
    return 0;
}