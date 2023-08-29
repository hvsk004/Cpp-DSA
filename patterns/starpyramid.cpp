#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a value of N: ";
    cin >> n;
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