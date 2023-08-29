#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Value of N: ";
    cin >> n;
    int p = 65;
    for (int i = n; i > 0; i--)
    {
        p = 65;
        for (int j = 1; j <= i; j++)
        {
            cout << (char)p;
            p += 1;
        }
        cout << endl;
    }
    return 0;
}