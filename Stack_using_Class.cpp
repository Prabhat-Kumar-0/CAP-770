#include <iostream>
using namespace std;

class stack
{
public:
    int data;
    stack *next;

    stack(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

stack *top = NULL;

void empty()
{
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }
}

void stack_top()
{
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack top element is : " << top->data << endl;
    }
}

void push(int data)
{
    stack *newData = new stack(data);
    newData->next = top;
    top = newData;
}

void pop()
{
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        stack *temp = top;
        cout << "Element deleted : " << temp->data << endl;
        top = top->next;
        delete temp;
    }
}

void print(){
    stack* temp = top;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main()
{
    empty();
    push(3);
    push(4);
    push(3);
    pop();
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(36);
    push(36);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    stack_top();
    print();
    pop();
    print();
}
