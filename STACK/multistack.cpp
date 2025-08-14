#include <iostream>
using namespace std;
class Nstack
{
    int *arr;
    int *top;
    int *next;
    int freespot;
    int n, s;

public:
    Nstack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        for (int i = 0; i < n; i++)
        {
            top[i] = -1;
        }
        for (int i = 0; i < s; i++)
        {
            next[i] = i + 1;
        }
        next[s - 1] = -1;
        freespot = 0;
    }
    bool push(int x, int m)
    {
        if (freespot == -1)
        {
            return false;
        }
        int index = freespot;
        freespot = next[index];
        arr[index] = x;
        next[index] = top[m - 1];
        top[m - 1] = index;
        return true;
    }

    int pop(int m)
    {
        if (top[m - 1] == -1)
        {
            return -1;
        }

        int index = top[m - 1];
        top[m - 1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};

int main()
{
    Nstack n(3, 6);
    n.push(10, 1);
    n.push(20, 1);
    n.push(30, 2);
    n.pop(1);
    n.pop(2);
    cout << n.pop(1) << endl;
    cout << n.pop(2) << endl;
}