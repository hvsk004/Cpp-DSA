#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[5] = {10, 98, 3, 54, 88};
    bubbleSort(arr, 5);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}