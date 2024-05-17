#include<iostream>
using namespace std;

int reverse(char arr[], int n)
{
    int s= 0;
    int e= n-1;

    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int length(char arr[]){
    int count= 0;
    for(int i=0; arr[i] != '\0'; i++)
    count++;
    return count;
}



int main(){
    char arr[10];
    cin>>arr;

    cout<<arr<<" ";
    cout<<endl;

    int len= length(arr);
    cout<<len<<endl;

    reverse(arr,len);
    cout<<arr<<endl;

}