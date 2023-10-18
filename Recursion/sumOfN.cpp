#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{
    int N;
    cout << "Enter The value of N: ";
    cin >> N;
    cout << "Sum is : " << sum(N);
    return 0;
}