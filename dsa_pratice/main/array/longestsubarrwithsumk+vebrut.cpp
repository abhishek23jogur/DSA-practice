#include<bits/stdc++.h>
using namespace std;

int subSum(int arr[],int n){
    int len = 0;
    int k = 3;
    for(int i = 0;i<n;i++){
        int s = 0;
        for(int j=i;j<n;j++){
            s+=arr[j];
        if(s==k){
            len = max(len,j-i+1);
        }
        }
    }
    return len;
}


int main(){
    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    subSum(arr,n);
}
