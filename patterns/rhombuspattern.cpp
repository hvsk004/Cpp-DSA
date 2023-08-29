#include <iostream>
using namespace std;
void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n + i; j++)
        {
            if (j > n - i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void invertedpyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = n + i - 1; j > 0; j--)
        {
            if (j <= 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a value of N: ";
    cin >> n;
    pyramid(n);
    invertedpyramid(n);
    return 0;
}