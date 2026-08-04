#include<bits/stdc++.h>
using namespace std;
int missing(int arr[],int n){
    int flag;
    for(int i=1;i<=n;i++){
        flag = 0;
        for(int j=0;j<n-1;j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0) return i;
    }
}
int main(){
    int arr[] = {1,2,4,5};
    int n = 5;
    int ans = missing(arr,n);
    cout<<ans;

}