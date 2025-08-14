#include <iostream>
using namespace std;

int stack_size = 5;
int arr[5];
int top =- 1;
    void push(int x)
    {
        if (top == stack_size - 1)
        {
            cout << "Stack is overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
            cout << "Push element is: " << x << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is underflow" << endl;
        }
        else
        {
            int y = arr[top];
            top--;
            cout << "Pop element is: " << y << endl;
        }
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "The top element is: " << arr[top] << endl;
        }
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

int main()
{

    push(33);
    push(45);
    push(75);
    pop();
    peek();
    display();
    return 0;
}