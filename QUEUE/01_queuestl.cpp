#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;

    q.push(2);
    q.push(4);
    q.push(12);
    q.push(36);

    // pop operation
    q.pop();



    // empty

    if (q.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << " queue is not empty " << endl;
    }
    cout << " size of the queue is  " << q.size();

    return 0;
}