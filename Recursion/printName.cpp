#include <bits/stdc++.h>
using namespace std;
void printName(int count)
{
    if (count <= 0)
        return;
    cout << "Krishna " << count << endl;
    printName(--count); // Never use post decrement or increment because the original count value is used to call the function first and then decrement so infinite loop
}
int main()
{
    int count;
    cout << "Enter the Value of N: ";
    cin >> count;
    printName(count);
    return 0;
}