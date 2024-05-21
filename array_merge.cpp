#include<iostream>
using namespace std;

int merge(int a1[], int n, int a2[], int m, int a3[]){
    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(a1[i]<a2[j]){
            a3[k]=a1[i];
            i++;
            k++;
        }
        else{
            a3[k]=a2[j];
            j++;
            k++;
        }
    }

    while(i<n){
        a3[k]=a1[i];
        i++;
        k++;
    }

    while(j<n){
        a3[k]=a2[j];
        j++;
        k++;
    }
}

int print(int arr[], int n){
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main() {
    int ar1[3]= {2,4,6};
    int ar2[4]= {0,1,3,5};
    int ar3[7]= {0};

    merge(ar1,3,ar2,4,ar3);
    print(ar3, 7);

}