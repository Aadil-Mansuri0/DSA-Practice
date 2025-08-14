#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // creating a stack
    stack<int> s;
    // push operation
    s.push(2);
    s.push(4);
    // pop operation
    s.pop();
    cout << " printing the top most element " << s.top() << endl;
    // empty
    if (s.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << " stack is not empty " << endl;
    }
    cout << " size of the stack is  " << s.size();

    return 0;
}