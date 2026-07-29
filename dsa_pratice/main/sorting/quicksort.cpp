#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]> pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
    }
    return j;
}





void quicksort(int arr[],int low,int high){
    if(low<high){
        int part = fun(arr,low,high);
        quicksort(arr,low,part-1);
        quicksort(arr,part+1,high);
    }
}


int main(){
    int n;
    cin>> n;
    int arr[n];
    cout<< "enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"sorted array:"<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}