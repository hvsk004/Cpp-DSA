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
        p = 65 + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << (char)p;
            p++;
        }
        cout << endl;
    }
    return 0;
}