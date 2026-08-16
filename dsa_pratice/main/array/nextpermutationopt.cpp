#include<bits/stdc++.h>
using namespace std;
vector<int> nextPermute(vector<int> per){
    int n = per.size();
    int ind = -1;
    for(int i=n-2;i>=0;i--){
        if(per[i]<per[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(per.begin(),per.end());
        return per;
    }
    for(int i=n-1;i>=ind;i--){
        if(per[i]>per[ind]){
            swap(per[i],per[ind]);
            break;
        }
    }
    reverse(per.begin()+ind+1,per.end());
    return per;
}
int main(){
    vector<int> per = {2,1,5,4,3,0,0};
    vector<int> ans = nextPermute(per);
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}