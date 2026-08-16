#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,3,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        int num=arr[i];
        int cnt=0;
        for(int j =0;j<n;j++){
            if(arr[j]==num){
                cnt++;
            }
        }
        if(cnt==1) return num;
    }

}