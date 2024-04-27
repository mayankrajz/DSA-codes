#include<iostream>
using namespace std;

bool search(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10];
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<endl;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;
    cout<<endl;

    bool found= search(arr,size,key);

    if(found){
        cout<<"Matched"<<endl;
    }

    else
    cout<<"Unmatched"<<endl;
}