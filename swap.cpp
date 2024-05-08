#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start= 0;
    int end= n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int print(int arr[], int n){
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[5]= {11,23,1,45,6};

    reverse(arr,5);
    print(arr,5);
}