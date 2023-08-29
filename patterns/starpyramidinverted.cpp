#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a value of N: ";
    cin >> n;
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