#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~node(){
        int value = this -> data;
        if(this -> next != NULL){
        delete next;
        this -> next = NULL;
        }
        cout<<"Element "<<value<<" is deleted"<<endl;
    }
};

void insertLeft(node* &head,int d){
    node *newnode = new node(d);
    newnode -> next = head;
    head = newnode;
}

void insertRight(node* &tail,int d){
    node *newnode = new node(d);
    tail->next = newnode;
    tail = newnode;
}

void insertMiddle(node* head,int d,int position){
    node *newnode = new node(d);
    node* current = head;
    int count = 1;
    while(count < position-1){
        current = current->next;
        count++;
    }
    newnode -> next = current -> next;
    current -> next = newnode;
}

void print(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }cout<<endl;
}

void deleteNode(node* head, int position){

    node* prev = head;
    int count = 1;
    while(count < position-1){
        prev = prev->next;
        count++;
    }
    node* current = prev->next;
    prev -> next = current -> next;
    current -> next = NULL;
    delete current;
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    node* first = new node(10);
    head = first;
    tail = first;
    print(head);
    insertLeft(head,15);
    print(head);
    insertLeft(head,10);
    print(head);
    insertLeft(head,5);
    print(head);
    insertRight(tail,20);
    print(head);
    insertRight(tail,23);
    print(head);
    insertRight(tail,24);
    print(head);
    insertMiddle(head,25,4);
    print(head);
    deleteNode(head,3);
    print(head);
    insertMiddle(head,25,4);
    print(head);
    insertRight(tail,20);
    print(head);
    insertLeft(head,15);
    print(head);
}