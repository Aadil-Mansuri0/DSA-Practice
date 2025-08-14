#include <iostream>
using namespace std;

int max_size = 5;
int q1[5];
int q2[5];
int front1 = 0, rear1 = -1;
int front2 = 0, rear2 = -1;
int count1 = 0;

void enqueue1(int x)
{
    if (rear1 == max_size - 1)
    {
        cout << "Queue 1 is full" << endl;
    }
    else
    {
        rear1++;
        q1[rear1] = x;
        cout << "Enqueued to Queue 1: " << x << endl;
    }
}

void enqueue2(int x)
{
    if (rear2 == max_size - 1)
    {
        cout << "Queue 2 is full" << endl;
    }
    else
    {
        rear2++;
        q2[rear2] = x;
        cout << "Enqueued to Queue 2: " << x << endl;
    }
}

int dequeue1()
{
    if (front1 > rear1)
    {
        cout << "Queue 1 is empty" << endl;
        return -1;
    }
    int val = q1[front1];
    front1++;
   
    if (front1 > rear1)
    {
        front1 = 0;
        rear1 = -1;
    }
    return val;
}

int dequeue2()
{
    if (front2 > rear2)
    {
        cout << "Queue 2 is empty" << endl;
        return -1;
    }
    int val = q2[front2];
    front2++;
   
    if (front2 > rear2)
    {
        front2 = 0;
        rear2 = -1;
    }
    return val;
}

void push(int val)
{
    for (int i = front1; i <= rear1; i++)
    {
        enqueue2(q1[i]);
    }


    front1 = 0;
    rear1 = -1;

    enqueue1(val);

    
    for (int i = front2; i <= rear2; i++)
    {
        enqueue1(q2[i]);
    }

    front2 = 0;
    rear2 = -1;

    count1++;
}

void pop()
{
    if (count1 == 0)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    int val = dequeue1();
    cout << "Popped element: " << val << endl;
    count1--;
}

void display()
{
    if (count1 == 0 || front1 > rear1)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = front1; i <= rear1; i++)
    {
        cout << q1[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    display();
    return 0;
}


