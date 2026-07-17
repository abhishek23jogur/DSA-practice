#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int revnum = 0;
    int dulnum = n;
    while(n>0){
        int lastdigit = n%10;
        revnum = (revnum*10) + lastdigit;
        n = n/10;
    }
    cout<< revnum<< endl;
    if(dulnum == revnum) cout << "True";
    else cout << "False";
}