#include<iostream>
using namespace std;
int main () {
    int a, sum=0;
    cin>> a;
    int i= 1;
    for (i; i<=a;i++)
    {
    if (i%2==0){
    cout<< i <<" "<<endl;
    sum= sum+i;
    }
    }
    cout<< sum <<endl;
    return 0;
}