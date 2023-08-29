#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value of N: ";
    cin >> n;
    int spaces = 0;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        spaces += 2;
        cout << endl;
    }
    return 0;
}