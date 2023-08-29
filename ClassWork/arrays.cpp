#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {
        1,
        2,
        3,
        4,
    };
    cout << "array before: ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int n;
    cin >> n;
    for (int i = n; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

    return 0;
}