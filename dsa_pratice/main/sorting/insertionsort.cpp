#include<bits/stdc++.h>
using namespace std;

void insertion(int n, int arr[])
{
    for(int i = 1; i < n; i++)//for(int i = 0;i<=n-1;i++)
    {
        int j = i;

        while(j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
        }
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
    insertion(n,arr);
    for(int i = 0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}
