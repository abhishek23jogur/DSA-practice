/*#include<iostream>
using namespace std;

void para(int i, int fact) {
    if (i < 1) {
        cout << fact << endl;
        return;
    }

    para(i - 1, fact * i);
}

int main(){
    int n = 6;
    para(n,1);
}*/


#include<iostream>
using namespace std;

int  para(int i) {
    if (i < 1) return 1;
   return i * para(i-1);
}

int main(){
    int n = 6;
   cout << para(n);
    
}



/* WITH FUNTINAL

int fact(n){
if(n<1)
return 1;
n * fact(n-1);

}

*/