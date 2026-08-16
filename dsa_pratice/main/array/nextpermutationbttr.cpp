#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermute(vector<int> next){
    next_permutation(next.begin(),next.end());
    return next;
}
int main(){
    vector<int> next = {2,1,3};
    vector<int> ans = nextPermute(next);
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}