#include<iostream>
using namespace std;

void fun(int i, int n){
    if(i>n)
    return;
    cout<< "abhi" << " ";
    fun(i+1,n);
}

int fun1(int i ,int n){
    if (i>n)
    return 0;
    cout << i << " ";
    fun1(i+1,n);
}

void fun2(int i,int n){
    if(i<1) return;
    cout<< i <<" ";
    fun2(i-1,n);
}

int main(){
    int i = 1;
    int n = 5;
    fun(1,n);
    cout<<endl;
    fun1(1,n);
    cout<<endl;
    fun2(n,n);
    
}