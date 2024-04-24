#include<iostream>
using namespace std;

int bsearch(int arr[], int n, int key){
    int start= 0;
    int end= n-1;

    int mid= start + (end-start) /2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start= mid + 1;
        }
        else{
            end= mid - 1;
        }
        mid= start + (end-start) /2;
    }
    return -1;
}

int main(){
    int arr[5]={1,22,32,44,69};

    int bs = bsearch(arr, 5, 22);

    cout<<"Index is: "<<bs;

    return 0;
}