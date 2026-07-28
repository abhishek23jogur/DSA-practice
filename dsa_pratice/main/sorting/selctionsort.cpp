#include<bits/stdc++.h>
using namespace std;

int selection(int n,int arr[]){
    for(int i = 0; i<=n-2;i++){
        int min = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j] < arr[min]){
                min = j;//so the min shifts to j
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp; //swap(arr[min],arr[i]);

        
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    cout<<"enter the elements:"<<endl;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    selection(n,arr);
    for(int i = 0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}
