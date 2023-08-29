#include <iostream>
using namespace std;
void hollowtriangle(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        spaces -= 2;
        cout << endl;
    }
}
void invertedhollowtriangle(int n)
{
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
}
int main()
{
    int n;
    cout << "Enter a value of N: ";
    cin >> n;
    invertedhollowtriangle(n);
    hollowtriangle(n);
    return 0;
}