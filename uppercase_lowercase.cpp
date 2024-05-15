#include<iostream>
using namespace std;

/*
ASCII values are used.
To derive ASCII values, just take int datatype and write the value within an inverted commas.
int a = 'A';
cout<<a;
*/


int main()
{
    char ch;
    cin >> ch;

    if (ch>=97 && ch<=122)
    cout<<"Lower Case"<<endl;

    else if (ch>=65 && ch<=90)
    cout<<"Upper Case"<<endl;

    else if (ch>=48 && ch<=57)
    cout<<"Numbers"<<endl;

    else
    cout<<"Special Character"<<endl;
}