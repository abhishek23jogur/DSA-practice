#include<bits/stdc++.h>
using namespace std;

void rotate(int a[],int n,int d){
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
}
int main(){
    int a[] = {1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    int d = 3;
    rotate(a,n,d);
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}