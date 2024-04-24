#include<iostream>
using namespace std;

int bsearch(int arr[], int size, int key){
    int start=0;
    int end= size-1;

    int mid= start+ (end-start)/2;

    while(start<=end){

        if (arr[mid]==key){
        return mid;
        }

        if (key>arr[mid]){
        start= mid+1;
        }

        else {//if (key<arr[mid])
        end= mid-1;
        }

        //else
        //cout<<"Number is not present"<<endl;
    mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int arr[5]={11,22,33,44,55};
    int size;
    cout<<"Enter size of the array: "<<endl;
    cin>> size;
    for(int i=0; i<size; i++)
    cin>>arr[i];

    int key;
    cout<<"Enter the key: "<<endl;
    cin>>key;
    

    int bs= bsearch(arr, size, key);
    cout<<"The array is in: "<<bs<<" Index.";

    return 0;
}