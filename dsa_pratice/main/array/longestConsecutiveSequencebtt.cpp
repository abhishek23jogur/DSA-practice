#include<bits/stdc++.h>
using namespace std;

int longest(vector<int> &a){
    int n = a.size();
    if(n==0) return 0;
    sort(a.begin(),a.end());
    int longest = 1;
    int lastSmall = INT_MIN;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(a[i]-1 == lastSmall){
            cnt+=1;
            lastSmall = a[i];
        }
        else if(lastSmall != a[i]){
            cnt=1;
            lastSmall = a[i];
        }
        longest = max(longest,cnt);
    }
    return longest;
}


int main(){
    vector<int> s = {100,102,100,101,101,4,3,2,3,2,1,1,1,2};
    int ans = longest(s);
    cout<<ans;
    return 0;
}
