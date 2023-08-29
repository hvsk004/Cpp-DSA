#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter Dividend: ";
    cin >> a;
    cout << "Enter Divisor: ";
    cin >> b;
    cout << "Quotient: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;
    return 0;
}