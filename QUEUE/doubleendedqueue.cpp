#include <iostream>
using namespace std;

int size1 = 7;
int front = -1;
int rear = -1;
int dequeue1[7];

void enqueue_front(int val)
{
    if ((front == 0 && rear == size1 - 1) || (front == rear + 1))
    {
        cout << "Queue is overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        dequeue1[front] = val;
    }
    else if (front == 0)
    {
        front = size1 - 1;
        dequeue1[front] = val;
    }
    else
    {
        front--;
        dequeue1[front] = val;
    }
}

void enqueue_rear(int val)
{
    if ((front == 0 && rear == size1 - 1) || (front == rear + 1))
    {
        cout << "Queue is overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        dequeue1[rear] = val;
    }
    else if (rear == size1 - 1)
    {
        rear = 0;
        dequeue1[rear] = val;
    }
    else
    {
        rear++;
        dequeue1[rear] = val;
    }
}

int dequeue_front()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    int val = dequeue1[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == size1 - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
    cout << "Dequeued from front: " << val << endl;
    return val;
}

int dequeue_rear()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    int val = dequeue1[rear];
    if (front == rear)
    {
        front = rear = -1;
    }
    else if (rear == 0)
    {
        rear = size1 - 1;
    }
    else
    {
        rear--;
    }
    cout << "Dequeued from rear: " << val << endl;
    return val;
}

void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements: ";
        int i = front;
        while (i != rear)
        {
            cout << dequeue1[i] << " ";
            i = (i + 1) % size1;
        }
        cout << dequeue1[rear] << endl;
    }
}

int main()
{
    enqueue_front(2);
    enqueue_front(5);
    enqueue_rear(-1);
    enqueue_rear(0);
    display();
    dequeue_front();
    dequeue_rear();
    dequeue_front();
    display();
    return 0;
}
