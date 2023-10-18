#include <bits/stdc++.h>
using namespace std;
void reverseArray(int *arr, int n, int i = 0)
{

    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArray(arr, i + 1);
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << "Original array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    reverseArray(arr, 4);
    cout << "Reversed array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}