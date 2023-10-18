#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "The factorial is : " << factorial(N);
    return 0;
}