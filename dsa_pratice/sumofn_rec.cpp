#include <iostream>
using namespace std;

void para(int i, int sum) {
    if (i < 1) {
        cout << sum << endl;
        return;
    }

    para(i - 1, sum + i);
}

int main() {
    int n = 6;
    para(n, 0);
}


/*
int sum(n){
if (n==0) return 1;
n + sum(n-1);
}


*/