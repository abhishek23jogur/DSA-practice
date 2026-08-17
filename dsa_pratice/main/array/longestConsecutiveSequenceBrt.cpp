#include<bits/stdc++.h>
using namespace std;

int Ls(vector<int> &arr, int num){
    int n = arr.size();
    for(int i =0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
        
    }
    return false;
}

int longestSequence(vector<int> &a){
    int n = a.size();
    if(n==0) return 0;
    int longest=1;
    for(int i=0;i<n;i++){
        int x = a[i];
        int cnt = 1;
        while(Ls(a,x+1) == true){
            x=x+1;
            cnt=cnt+1;
            longest = max(longest,cnt);
        }
    }
    return longest;
}
int main(){
    vector<int> sq = {102,4,100,1,101,3,2,1,1};
    int ans = longestSequence(sq);
    cout<< ans;

}