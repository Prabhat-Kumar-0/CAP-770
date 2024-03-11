#include <iostream>
using namespace std;
#define n 10
int Q[n];
int front = -1;
int rear = -1;

// current pos = i
// next pos = (i+1)%n
// prev pos = (i-1+n)%n

bool isFull()
{
    if ((rear + 1) % n == front)
    {
        cout << "Queue is full";
        return 1;
    }
    else
    {
        cout << "Queue is not full";
        return 0;
    }
}

bool isEmpty()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Empty";
        return 1;
    }
    else
    {
        cout << "Queue is not full";
        return 0;
    }
}

void enque(int d)
{
    if (isFull())
    {
        return;
    }
    else if (isEmpty())
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % n;
    }
    
     Q[rear] = d;
}

void deque()
{
    if (isEmpty())
    {
        return;
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % n;
    }
}

void print()
{
    for (int i = front; i < rear; i++)
    {
        cout << Q[i] << " ";
    }
    cout << endl;
}

int main()
{
    enque(n);
    enque(11);
    enque(12);
    enque(13);
    enque(14);
    enque(15);
    enque(16);
    enque(17);
    enque(18);
    enque(19);
    print();
    // deque();
    // print();
}
