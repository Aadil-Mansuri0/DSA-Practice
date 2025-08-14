#include <iostream>
using namespace std;

void toh(int n, char source, char destination, char helper) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << "\n";
        return;
    }
    toh(n - 1, source, helper, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << "\n";
    toh(n - 1, helper, destination, source);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    toh(n, 'A', 'C', 'B');  // A = source, C = destination, B = helper

    return 0;
}
