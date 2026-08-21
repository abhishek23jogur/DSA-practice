#include<bits/stdc++.h>
using namespace std;

int subarrayWithSumK(vector<int>&a,int k){
    int cnt=0;
    int n = a.size();
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += a[j];
            if(sum==k){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    vector<int> arr = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    int ans = subarrayWithSumK(arr,k);
    cout<<ans;
    return 0;
}