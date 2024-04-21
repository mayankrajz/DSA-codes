#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"Enter first number: "<<endl;
    cin>>a;

    cout<<"Enter second number: "<<endl;
    cin>>b;

    char op;
    cout<<"Enter operation to perform: "<<endl;
    cin>>op;

    switch(op){
        case '+' : cout<<(a+b)<<endl;
        break;

        case '-' : cout<<(a-b)<<endl;
        break;

        case '*' : cout<<(a*b)<<endl;
        break;

        case '/' : cout<<(a/b)<<endl;
        break;

        case '%' : cout<<(a%b)<<endl;
        break;

        default : cout<<"Invalid"<<endl;

    }
}