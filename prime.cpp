#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter Number: "<<endl;
    cin>>m;

    bool isPrime= 1;

    for(int i=2; i<m; i++)
    {
        if( m % i== 0){
            isPrime= 0;
            break;
        }
    } 
    if(isPrime == 0){
        cout<<"Not Prime";
    }
    else
    cout<<"Prime";

    return 0;
    
}