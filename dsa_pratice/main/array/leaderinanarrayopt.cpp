#include<bits/stdc++.h>
using namespace std;

vector<int> leaderOpt(vector<int> &a){
    int n = a.size();
    int maxi = INT_MIN;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi = max(maxi,a[i]);
    }
    return ans;
}
int main(){
    vector<int> a = {10,22,12,3,0,6};
    vector<int> ans = leaderOpt(a);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}