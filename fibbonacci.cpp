#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int x=0;
    int y=1;
    cout<< x <<" "<< y <<" ";

    for(int i=2; i<=a; i++)
    {
       int add= x+y;
       cout<<add<<" ";

       x=y;
       y=add;

    }
    return 0; 
}