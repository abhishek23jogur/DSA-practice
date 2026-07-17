#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin >> n;
    int dulnum = n;
    while(n>0){
        int ld = n%10;
        sum = sum + (ld*ld*ld);
        n = n/10;
    }
    cout<< sum<< endl;
    if(dulnum == sum) cout << "True";
    else cout << "False";
}