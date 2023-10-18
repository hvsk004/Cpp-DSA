#include <bits/stdc++.h>
using namespace std;
bool compare(char a, char b)
{
    if (a == b)
        return true;
    return false;
}
bool checkPalindrome(string str, int n, int i = 0)
{
    if (i >= n / 2)
        return true;
    if (compare(str.at(i), str.at(n - i - 1)))
        return checkPalindrome(str, n, i + 1);
    return false;
}
int main()
{
    string s1 = "Hello";
    string s2 = "SOS";
    cout << "S1: " << checkPalindrome(s1, s1.length()) << endl;
    cout << "S2: " << checkPalindrome(s2, s2.length()) << endl;
    return 0;
}