#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value of N: ";
    cin >> n;
    int p = 65;
    for (int i = 1; i <= n; i++)
    {
        p = 65;
        int q = 65 + i - 2;
        // Spaces
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }

        // Letters
        for (int j = 1; j <= i; j++)
        {
            cout << (char)p;
            p++;
        }

        // Letters-Reverse
        for (int j = 1; j < i; j++)
        {
            cout << (char)q;
            q--;
        }

        // Spaces
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}