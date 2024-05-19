#include<iostream>
using namespace std;

int abit(int a){
    int count= 0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    return count;
}

int bbit(int b){
    int count=0;

    while(b!=0){
        if(b&1){
            count++;
        }
        b=b>>1;
    }
    return count;
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"1 bit in a are: "<<abit(a)<<endl;
    cout<<"1 bit in b are: "<<bbit(b)<<endl;

    int ans= abit(a) + bbit(b);
    cout<<"Answer: "<<ans;
}