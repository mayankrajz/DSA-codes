#include<iostream>
using namespace std;

bool pal(char arr[], int n){
    int s=0;
    int e= n-1;

    while(s<=e){
    if(arr[s]!=arr[e])
    return 0;
    
    else{
        s++;
        e--;
    }
    }
    return 1;
}

int length(char arr[]){
    int count= 0;
    for(int i=0; arr[i] != '\0'; i++)
    count++;
    return count;
}


int main(){
    char arr[5];
    cin>> arr;
    cout<< arr<<endl;

     int len= length(arr);
    

    int p= pal(arr,len);
    if(p == 1)
    cout<<"Palindrome";

    else
    cout<<"Not";
}