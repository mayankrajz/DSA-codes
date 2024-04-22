#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row=1;
    //int count=1; //exp1
    //only one exp at a time.

    while(row<=n){
        int col=1;
        int count = 1; //exp2
        while(col<=row){
            cout<<row-count+1<<" ";//n-
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
}