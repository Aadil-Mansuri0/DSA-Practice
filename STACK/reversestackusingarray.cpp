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
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is underflow" << endl;
            return -1;
        }
        else
        {
            int y = arr[top];
            top--;
            cout << "Pop element is: " << y << endl;
            return y;
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
    void reversestack(){
        int arr2[stack_size];
        int count =top+1;
        for(int i =0; i<count; i++){
           arr2[i]=pop();
        
        }
          for(int i =0; i<count; i++){
            push(arr2[i]);
          }
        
    }
     int main(){
        push(20);
        push(30);
        push(40);
        push(50);
        display();
        reversestack();
        display();
     }