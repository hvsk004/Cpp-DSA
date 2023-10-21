#include <bits/stdc++.h>
using namespace std;
void TOH(int n, char t1, char t2, char t3)
{
    if (n == 1)
    {
        cout << "Move 1 from " << t1 << " to "
             << t3 << endl;
        return;
    }
    TOH(n - 1, t1, t3, t2);
    cout << "Move " << n << " from " << t1 << " to " << t3;
    cout << endl;

    TOH(n - 1, t2, t1, t3);
}
int main()
{
    TOH(3, 'A', 'B', 'C');
    return 0;
}