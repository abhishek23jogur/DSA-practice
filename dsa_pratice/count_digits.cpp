#include <bits/stdc++.h> 
using namespace std; 
int countDigits(int n) { 
    if (n == 0) return 1; 
    int count = 0; 
    while (n != 0) { 
        count++; 
        n /= 10; 
    } 

    return count; 
} 

int main() { 
int n = 12345; 
cout << countDigits(n); 
return 0; 
}