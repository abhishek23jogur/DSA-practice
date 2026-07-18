#include<iostream>
using namespace std;


void func(int i , int n){
    if(i<1) return;
    func(i-1,n);
    cout << i << " ";
}


void func1(int i , int n){
    if(i>n) return;
    func1(i+1,n);
    cout << i << " ";
}
int main(){
    int n = 5;
    func(n,n);
    cout<<endl;
    func1(1,n);
}