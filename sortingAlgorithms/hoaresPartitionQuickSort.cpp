#include <bits/stdc++.h>
using namespace std;
int hoare(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1;
    int j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}
void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = hoare(arr, l, h);
        quickSort(arr, l, p);
        quickSort(arr, p + 1, h);
    }
}
int main()
{

    return 0;
}