#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &arr,int n){
    vector<int> pos,neg;
    for(int i = 0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    for(int i = 0;i<n/2;i++){
        arr[i*2]=pos[i];
        arr[i*2+1]=neg[i];
    }
    return arr;
}
int main(){
    vector<int> arr = {3,1,-2,-5,2,-4};
    int n = arr.size();
    vector<int> ans = rearrangeArray(arr,n);
    for(int x : ans ){
        cout<<x<<" ";
    }
    return 0;
}