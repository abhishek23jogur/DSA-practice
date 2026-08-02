#include<bits/stdc++.h>
using namespace std;

int linear(int arr[],int n,int num){
    for(int i = 0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {6,7,8,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 4;
    int ans = linear(arr,n,num);
    cout<< ans;
}