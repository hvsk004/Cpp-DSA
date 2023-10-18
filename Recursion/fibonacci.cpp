#include <bits/stdc++.h>
using namespace std;
void fibonacci2(int n, int a = 0, int sum = 1)
{
    if (n == 2)
        return;
    cout << a + sum << " ";
    fibonacci2(--n, sum, a + sum);
}
int fibonacci(int N)
{

    // Base Condition.
    if (N <= 1)
    {
        return N;
    }

    // Problem broken down into 2 functional calls
    // and their results combined and returned.
    int last = fibonacci(N - 1);
    int slast = fibonacci(N - 2);

    return last + slast;
}
int main()
{
    cout << "0 1 ";
    fibonacci2(9);
    cout << endl;
    int n;
    cout << "Eneter the value of N: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
