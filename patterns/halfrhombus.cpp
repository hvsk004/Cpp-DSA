#include <iostream>
using namespace std;
void halfpyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void invertedhalfpyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a value of N: ";
    cin >> n;
    halfpyramid(n);
    invertedhalfpyramid(n);
    return 0;
}