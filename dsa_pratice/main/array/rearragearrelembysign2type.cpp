//in this the pos!=neg so we cant use opt soln so we use brt and make changes where the no of +ve and -ve r counted on that basis we solve
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
    if(pos.size()>neg.size()){
        for(int i = 0;i<neg.size();i++){
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        int ind = neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            arr[ind]=pos[i];
            ind++;
        }
    }
    else{
        for(int i = 0;i<pos.size();i++){
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        int ind = pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            arr[ind]=neg[i];
            ind++;
        }  
    }
    return arr;
}
int main(){
    vector<int> arr = {1,2,-4,-5,3,6};
    int n = arr.size();
    vector<int> ans = rearrangeArray(arr,n);
    for(int x : ans ){
        cout<<x<<" ";
    }
    return 0;
}