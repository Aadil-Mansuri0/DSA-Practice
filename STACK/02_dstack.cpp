#include <iostream>
using namespace std;

class MyStack {
    int *arr;
    int size;
    int top;

public:
    MyStack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int x) {
        if (top == size - 1) {
            cout << "Stack is overflow" << endl;
        } else {
            top=top+1;
            arr[top] = x;
            cout << "Push element is: " << x << endl;
        }
    }
    void pop() {
        if (top == -1) {
            cout << "Stack is underflow" << endl;
        } else {
            int y = arr[top];
            top=top-1;
            cout << "Pop element is: " << y << endl;
        }
    }
    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "The top element is: " << arr[top] << endl;
        }
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements :";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

};

int main() {
    MyStack st(5);
    st.push(33);
    st.push(45);
    st.push(75);
    st.pop();
    st.peek();
    st.display();
    return 0;
}