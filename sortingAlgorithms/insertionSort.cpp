#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main()
{

    int arr[5] = {10, 98, 3, 54, 88};
    insertionSort(arr, 5);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}