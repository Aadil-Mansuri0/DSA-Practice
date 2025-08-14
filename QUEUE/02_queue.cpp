#include <iostream>
using namespace std;

    int max_size = 6;
    int queue[6];
    int qfront = 0;
    int rear = -1;

    void enqueue(int x)
    {
        if (rear == max_size - 1)
        {
            cout << " queue is overflow " << endl;
        }
        else
        {
            rear = rear + 1;
            queue[rear] = x;
            cout << " rear element is :" << x << endl;
        }
    }
    void dequeue()
    {
        if (qfront > rear)
        {
            cout << " queue is underflow " << endl;
        }
        else
        {
            int y = queue[qfront];
            qfront = qfront + 1;
            cout << " dequeued element is :" << y << endl;

            if (qfront > rear)
            {
                qfront = 0;
                rear = -1; 
            }
        }
    }

    void front()
    {
        if (qfront > rear)
        {
            cout << " queue is empty" << endl;
        }
        else
        {
            cout << "The front element is :" << queue[qfront] << endl;
        }
    }
    void display()
    {
        if (qfront > rear)
        {
            cout << " queue is underflow " << endl;
        }
        else
        {
            cout << " the queue element :" << " ";
            for (int i = qfront; i <= rear; i++)
            {
                cout << queue[i] << " ";
            }
        }
        cout << endl;
    }

int main()
{
    enqueue(23);
    enqueue(47);
    enqueue(66);
    display();
    front();
    dequeue();
    dequeue();
    display();
    enqueue(35);
    enqueue(76);
    enqueue(99);
    enqueue(98);
  
}