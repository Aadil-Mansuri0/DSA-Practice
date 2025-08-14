#include <iostream>
using namespace std;
int size1 = 5;
int cq[5];
int front = -1;
int rear = -1;

void enqueue(int val)
{
    if ((rear + 1)%size1 == front)
    {
        cout << "queue is overflow" << endl;
        return;
    }

    if (rear == -1 && front == -1)
    {
        rear = 0;
        front = 0;
    }
    else
    {
        rear = (rear + 1)%size1;
    }
    cq[rear] = val;
    cout<<"the enqueue element : "<< cq[rear] << endl;
}

void dequeue()
{
    if (rear == -1 && front == -1)
    {
        cout << "queue is underflow" << endl;
        return;
    }

    int x = cq[front];
    cout <<"the dequeued element :" << x << endl;

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1)%size1;
    }
}

void display()
{
    if (rear == -1 && front == -1)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        for (int i = front; i != rear; i = (i + 1)%size1)
        {
            cout << cq[i] << endl;
        }
        cout << cq[rear] << " " << endl;
    }
}
int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(3);
    display();
    dequeue();
    dequeue();
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    return 0;
}