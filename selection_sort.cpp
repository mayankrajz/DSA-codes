#include<iostream>
using namespace std;

int selection(int arr[], int n){
    for(int i=0; i<(n-1); i++)
    {
    int minIndex= i;

    for(int j=(i+1); j<n; j++){

        if(arr[j] < arr[minIndex])
        minIndex= j;

        }
    swap(arr[minIndex], arr[i]);

    }
}

int main(){
    int arr[]= {10,2,4,1,6};
    int n= sizeof(arr) / sizeof(arr[0]);

    selection(arr,n);

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
}