#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Value of N: ";
    cin >> n;
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << p << " ";
            p += 1;
        }
        cout << "\n";
    }
    return 0;
}