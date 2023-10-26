#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minN = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minN] > arr[j])
            {
                minN = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minN];
        arr[minN] = temp;
    }
}
int main()
{
    int arr[5] = {10, 40, 67, 22, 12};
    selectionSort(arr, 5);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}