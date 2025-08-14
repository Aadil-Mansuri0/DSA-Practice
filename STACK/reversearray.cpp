#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of  elements :";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    stack<int> s;
    // push all array element into stack

    for (int i = 0; i <= n - 1; i++)
    {
        s.push(arr[i]);
    }
    // pop element again into the array but this time in reverse order
    for (int i = 0; i <= n - 1; i++)
    {
        arr[i] = s.top();
        s.pop();
    }
    // print reverse elements of array

    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}