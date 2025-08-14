#include <iostream> // when enqueue o(1) & dequeue o(n)
using namespace std;

int max_size = 5;
int st1[5];
int st2[5];
int top1 = -1;
int top2 = -1;
int count1 = 0;
void push1(int x)
{
    if (top1 == max_size - 1)
    {
        cout << "Stack is overflow" << endl;
    }
    else
    {
        top1++;
        st1[top1] = x;
        cout << "Pushed element to stack 1 is: " << x << endl;
    }
}
void push2(int x)
{
    if (top2 == max_size - 1)
    {
        cout << "Stack is overflow" << endl;
    }
    else
    {
        top2++;
        st2[top2] = x;
        cout << "Pushed element to stack 2 is: " << x << endl;
    }
}
int pop1()
{
    if (top1 == -1)
    {
        cout << "Stack is underflow" << endl;
        return -1;
    }
    else
    {
        int a = st1[top1];
        top1--;
        cout<<" pop element from stack 1 is :"<< a << endl;
        return a;
    }
}
int pop2()
{
    if (top2 == -1)
    {
        cout << "Stack is underflow" << endl;
        return -1;
    }
    else
    {
        int b = st2[top2];
        top2--;
        cout<<" pop element from stack 2 is :"<< b << endl;
        return b;
    }
}
void enqueue(int val)
{
    push1(val);
    count1++;
}
void dequeue()
{
    if (count1 == 0)
    {
        cout << " queue is empty";
    }

    for (int i = 0; i < count1; i++)
    {
        int a = pop1();
        push2(a);
    }
    int b = pop2();
    cout<<" dequeued element is : "<< b << endl;
    count1--;

    for (int i = 0; i < count1; i++)
    {
        int a = pop2();
        push1(a);
    }
}
void display()
{
    for (int i = 0; i <= top1; i++)
    {
        cout << st1[i] << " ";
    }
    cout<< endl;
}
int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(1);
    dequeue();
    display();
    return 0;
}