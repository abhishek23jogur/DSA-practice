#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    int sum = (n*(n+1))/2;
    int s2 = 0;
    for(int i = 0;i<n-1;i++){
        s2+=arr[i];
    }
    return(sum-s2);
}

int xorm(int arr[],int n){
    int xor1=0,xor2=0;
    for(int i = 0;i<n-1;i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1^n;
    return xor1^xor2;
}
int main(){
    int arr[] = {1,2,4,5};
    int n = 5;
    int ans = sum(arr,n);
    cout<<ans<<endl;
    int ans2 = xorm(arr,n);
    cout<<ans2;

}