#include<iostream>
using namespace std;

int bubble(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

int main(){
    int arr[5]={12,3,1,14,10};
    int n= sizeof(arr) / sizeof(arr[0]);

    bubble(arr,5);

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}