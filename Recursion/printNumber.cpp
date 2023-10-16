#include <bits/stdc++.h>
using namespace std;

int count = 1; // Global Declaration

void print()
{
    cout << ::count << endl;
    if (::count == 4)
        return;
    ::count++; // To refference count variable and avoid ambigious error
    print();
}

int main()
{
    print();
    return 0;
}
