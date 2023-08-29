#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Three Numbers: ";
    cin << a << b << c;
    if (((a > b) && (a < c)) || ((a < b) && (a > c)))
    {
        cout << a << " is the midlle number";
    }
    else if (((b > c ) && ( b < a )) || (( b < c )

    return 0;
}