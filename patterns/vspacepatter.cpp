#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Value of N: ";
    cin >> n;
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // Numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        // Numbers
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << "\n";
        spaces -= 2;
    }
    return 0;
}