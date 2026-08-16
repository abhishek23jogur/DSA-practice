#include<bits/stdc++.h>
using namespace std;

int consecutive(int arr[],int n){
    int cnt=0;
    int maxi=0;
    for(int i = 0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi = max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    int arr[] = {1,1,0,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = consecutive(arr,n);
    cout<<ans;
}
