#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string str;
    cout << "enter a string :";
    cin >> str;

    stack<char> ch;

    for (int i = 0; i <= str.length(); i++)
    {
        ch.push(str[i]);
    }

    for (int i = 0; i <= str.length(); i++)
    {
        str[i] = ch.top();
        ch.pop();
    }

    for (int i = 0; i <= str.length(); i++)
    {
        cout <<str[i]<<"";
    }
    cout << endl;
    return 0;
}