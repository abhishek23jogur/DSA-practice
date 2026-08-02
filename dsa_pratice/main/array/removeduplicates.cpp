#include<bits/stdc++.h>
using namespace std;

int dupli(int arr[],int n){
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            cout<<arr[i]<<" ";
            i++;
        }
    }
    return i+1;
}
int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = dupli(arr,n);
    cout<< ans;
    
}
