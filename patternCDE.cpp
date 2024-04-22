#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    //char start= 'A';

    while(i<=n){
        int j=1;
        char start = 'A' +n-i;
        while(j<=i){
            //char start ='A'+i+j-2 ; //'A'+i-1
            cout<<start<<" ";
            start++;
            j++;
        }
        cout<<endl;
        i++;
    } 
}