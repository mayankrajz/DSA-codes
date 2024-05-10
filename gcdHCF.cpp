#include<iostream>
using namespace std;

int gcd(int a, int b){
    
    if(a==0){
    cout<<"b"<<endl;
    return b;
    }

    if(b==0){
    cout<<"a"<<endl;
    return a;
    }

    while(a!=b){
        if(a>b){
            a= a-b;
        cout<<"b"<<endl;
        }

        else{
            b= b-a;  
        cout<<"a"<<endl;
        }
    }
    return a;
}

int main(){
    int a, b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;
}