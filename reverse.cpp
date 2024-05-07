#include<iostream>
using namespace std;

int reverse(int arr[], int n){
    int m=arr[0];
    int s=m+1;
    int e= n-1;

    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return 1;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int s= sizeof (arr)/ sizeof (arr[0]);
    reverse(arr,5);

    for(int i=0; i<s; i++)
    cout<<arr[i]<<" ";
}