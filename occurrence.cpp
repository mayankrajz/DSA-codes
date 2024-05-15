#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int k){
    int s= 0;
    int e= n-1;
    int mid= (s+e)/2;
    int ans= -1;

    while(s<=e){
        if(arr[mid]==k){
            ans= mid;
            e= mid-1;
        }
        else if(k>mid){
            s= mid+1;
        } 
        else if(k<mid){
            e= mid-1;
        }
        mid= (s+e)/2;
    }
    return ans;
}

int lastocc(int arr[], int n, int k){
    int s= 0;
    int e= n-1;
    int mid= (s+e)/2;
    int ans= -1;

    while(s<=e){
        if(arr[mid]==k){
            ans= mid;
            s= mid+1;
        }
        else if(k>arr[mid]){
            s= mid+1;
        }
        else if(k<arr[mid]){
            e= mid-1;
        }
        mid= (s+e)/2;
    }
    return ans;
}

int main(){
    int arr[7]={1,2,2,3,4,};

    cout<<"First Occurrence is on Index: "<<firstocc(arr,5,2)<<endl;
    cout<<"Last Occurrence is on Index: "<<lastocc(arr,5,2)<<endl;

    int add=0;
    add = (lastocc(arr,5,2)-firstocc(arr,5,2))+1;
    cout<<"Number of occurrence: "<<add; 

}