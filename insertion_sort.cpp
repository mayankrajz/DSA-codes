#include<iostream>
using namespace std;

int insertion(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp= arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]= arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]= temp;
    }
}

int main(){
    int arr[5]= {11,3,19,1,9};
    int n= sizeof(arr)/sizeof(arr[0]);

    insertion(arr,5);

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}