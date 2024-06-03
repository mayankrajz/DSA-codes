#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int inserthead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head= temp;
    return 0;
}

void print(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

void inserttail(node* &tail, int d){
    node* temp= new node(d);
    tail -> next= temp;
    tail= temp;
}

int main(){
    //new node created
    node* node1= new node(10);
    
    //initializing head
    node* head = node1;
    print(head);

    inserthead(head,15);
    print(head);

    inserthead(head,20);
    print(head);

    cout<<"Tail inserting"<<endl;

    node*tail = node1;

    inserttail(tail, 4);
    print(head);

    inserttail(tail, 1);
    print(head);


    return 0;
}

