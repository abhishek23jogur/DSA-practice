#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &arr,int n){
    vector<int> ans(n);
    int posInd=0,negInd=1;
    for(int i = 0;i<n;i++){
        if(arr[i]>0){
            ans[posInd]=arr[i];
            posInd+=2;
        }
        else{
            ans[negInd]=arr[i];
            negInd+=2;
        }
    }
    return ans;
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