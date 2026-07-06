#include<bits/stdc++.h>
using namespace std;
/*int main(){
    int n = 4;
    for(int i = 0;i < n-1; i++){
        for(int j = 0;j < n-1;j++){
            cout << "*";
        }
        cout<< endl;
    }
}*/

void pattern1(int n){
    for(int i = 0;i < n; i++){
        for(int j = 0;j < n;j++){
            cout << "* ";
        }
        cout<< endl;
    }
}

/*int main(){
    int n;
    cin >> n;
    print1(n);
}*/

void pattern2(){
    for(int i = 0;i < 5;i++){
        for(int j = 0;j <= i;j++){
            cout<< "* ";
        }
        cout<< endl;
    }
}

void pattern3(){
    for(int i = 1;i <= 5;i++){
        for(int j = 1;j <= i;j++){
            cout<<  j ;
        }
        cout<< endl;
    }
}

void pattern4(){
    for(int i = 0;i <= 5;i++){
        for(int j = 0;j < i;j++){
            cout<< i;
        }
        cout<< endl;
    }
}

void pattern5(int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-i;j++){
            cout<< "* " ;
        }
        cout<< endl;
    }
}

void pattern6(int n){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n-i+1;j++){
            cout<< j << " " ;
        }
        cout<< endl;
    }
}

void pattern7(int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-i-1;j++){
            cout<< " " ;
        }
        for(int j = 0;j < 2*i+1;j++){
            cout<< "*";
        }
        for(int j = 0 ;j< n-i-1;j++){
            cout<< " ";
        }
        cout<< endl;
    }
}

void pattern8(int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < i;j++){
            cout<< " " ;
        }
        for(int j = 0;j < 2*n -(2*i+1);j++){
            cout<< "*";
        }
        for(int j = 0 ;j < i;j++){
            cout<< " ";
        }
        cout<< endl;
    }
}

void pattern9(int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-i-1;j++){
            cout<< " " ;
        }
        for(int j = 0;j < 2*i+1;j++){
            cout<< "*";
        }
        for(int j = 0 ;j< n-i-1;j++){
            cout<< " ";
        }
        cout<< endl;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < i;j++){
            cout<< " " ;
        }
        for(int j = 0;j < 2*n -(2*i+1);j++){
            cout<< "*";
        }
        for(int j = 0 ;j < i;j++){
            cout<< " ";
        }
        cout<< endl;
    }
}
/*int main(){
    int n = 5;
    pattern7(n);
    pattern8(n);
}*/


void pattern10(int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < i;j++){
            cout<<"*";
        }
        cout<< endl;
    }
    for(int i = 0;i<n;i++){
        for(int j = 1;j < n-i+1;j++){
            cout<<"*" ;
        }
        cout<< endl;
    }
}


void pattern11(int n){
    int start = 1;
    for(int i = 0;i<n;i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j = 0;j<=i;j++){
            cout<<start;
            start = 1 - start;
        }
    cout<<endl;
    }
}

void pattern12(int n){
    int space = 2*(n-1);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        for(int j = 1; j<=space;j++){
            cout<<" ";
        }
        for(int j = i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}

void pattern13(int n){
    int num = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<num<<" ";
            num = num + 1;
        }
        cout <<endl;
    }
}

void pattern14(int n){
    for(int i = 0;i<n;i++){
        for(char ch = 'A';ch<= 'A'+ i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i = 0;i<n;i++){
        for(char ch = 'A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n){
    for(int i = 0;i<n;i++){
        char ch = 'A' + i;
        for(int j = 0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
        }
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n){
    for(int i = 0;i<n;i++){
        for(char ch = 'E'- i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


void pattern19(int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-i-1;j++){
            cout<< "*" ;
        }
        for(int j = 0;j < 2*i+1;j++){
            cout<< " ";
        }
        for(int j = 0 ;j< n-i-1;j++){
            cout<< "*";
        }
        cout<< endl;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < i;j++){
            cout<< "*" ;
        }
        for(int j = 0;j < 2*n -(2*i+1);j++){
            cout<< " ";
        }
        for(int j = 0 ;j < i;j++){
            cout<< "*";
        }
        cout<< endl;
    }
    
}

void pattern191(int n){
    int iniS = 0;
    for(int i = 0;i<n;i++){
        for(int j = 1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j = 0;j<iniS;j++){
            cout<<" ";
        }
        for(int j = 1;j<=n-i;j++){
            cout<<"*";
        }
    iniS += 2;
    cout<<endl;
    }
    iniS = 2*n-2;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        for(int j = 0;j<iniS;j++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        iniS -= 2;
        cout<<endl;
    }
}


void pattern20(int n){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= i;j++){
            cout<< "*" ;
        }
        for(int j = 1;j <= 2*n -(2*i+1);j++){
            cout<< " ";
        }
        for(int j = 1 ;j <= i;j++){
            cout<< "*";
        }
        cout<< endl;
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n-i-1;j++){
            cout<< "*" ;
        }
        for(int j = 1;j <= 2*i+1;j++){
            cout<< " ";
        }
        for(int j = 1 ;j<= n-i-1;j++){
            cout<< "*";
        }
        cout<< endl;
    }   
}

void pattern201(int n){
    int spa = 2*n-2;
    for(int i = 1;i<=2*n-1;i++){
        int star = i;
        if(i>n) star = 2*n-i;
        for(int j = 1;j<=star;j++){
            cout<<"*";
        }
        for(int j = 1;j<=spa;j++){
            cout<<" ";
        }
        for(int j = 1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n)spa -= 2;
        else spa += 2;
    }
}

void pattern21(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

void pattern22(int n){
    for(int i = 0;i<2*n-1;i++){
        for(int j = 0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)))<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    pattern1(n);
    pattern2();
    pattern3();
    pattern4();
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern191(n);
    pattern20(n);
    pattern201(n);
    pattern21(n);
    pattern22(n);
}