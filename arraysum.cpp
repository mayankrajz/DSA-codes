#include<iostream>
using namespace std;

int sum(int arr[], int n){
    int add= 0;
    for(int i=0; i<n; i++){
        //cout<<arr[i]<<endl;

        add= add+arr[i];
    }
    return add;
}

int main(){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout<<"Addition: "<<sum(arr,n)<<endl;
}