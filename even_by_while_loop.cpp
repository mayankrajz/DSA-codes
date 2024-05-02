#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int sum=0;
    int i=0;
    while(i<=a)
    {
        
        if(i%2==0){
        cout<<i<<" ";
        sum= sum+i;
        }
        i++;
    }
    cout<<endl<<sum<<endl;

}