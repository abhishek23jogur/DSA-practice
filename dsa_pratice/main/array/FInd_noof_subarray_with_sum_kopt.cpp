#include<bits/stdc++.h>
using namespace std;

int SumSubarray(vector<int>&a, int k){
    int n = a.size();
    unordered_map<int,int> mpp;
    mpp[0] = 1;
    int presum = 0, cnt = 0;
    for(int i = 0;i<n;i++){
        presum += a[i];
        int remove = presum - k;
        cnt += mpp[remove];
        mpp[presum] += 1;
    }
    return cnt;
}


int main(){
    vector<int> a = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    int ans = SumSubarray(a,k);
    cout<< ans;
    return 0;
}