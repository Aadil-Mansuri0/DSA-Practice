#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int si = i;
        for (int j = i+1; j < n ; j++)
        {
            if (arr[j] <arr[si]) // arr[j] >arr[si] decreasing order
            {
                si=j;
            }
        }
        swap(arr[i], arr[si]);
    }
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n = 5;
    int arr[] = {4, 1, 2, 5, 3};
    selectionsort(arr, n);
    printarr(arr, n);
}