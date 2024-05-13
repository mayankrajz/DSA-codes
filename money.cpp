#include<iostream>
using namespace std;

int main()
{
    int a,m,n,o,p,q,r,s,t,u,v;
    cout<<"Enter Money: "<<endl;
    cin>>a;

    int b;
    cin>>b;

    switch(b){
        case 100 :{
            m= a/100;
            cout<<"100 rupees notes: "<<m<<endl;
        }

        case 50 :{
            n= a%100;
            o= n/50;
            cout<<"50 rupees notes: "<<o<<endl;
        }

        case 10 :{
            p= (n%50);
            q= p/10;
            cout<<"10 rupees notes: "<<q<<endl;
        }

        case 1 :{
            r= (p%10);
            s= r/1;
            cout<<"1 rupees notes: "<<s<<endl;
        }
    }
}