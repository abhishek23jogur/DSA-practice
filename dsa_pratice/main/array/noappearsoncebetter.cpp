#include<bits/stdc++.h>
using namespace std;
int hashing(int arr[],int n){
    map<long long,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second==1){
            return it.first;
        }
    }
    return -1;
}

int hashing1(int arr[],int n){
    int maxi = arr[0];
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    int hash[maxi+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i =0;i<n;i++){
        if(hash[arr[i]]==1){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,1,2,3,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = hashing(arr,n);
    int ans1 = hashing1(arr,n);
    cout<<ans << " "<<ans1;
}

