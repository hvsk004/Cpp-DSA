#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome2(string str, int n, int i = 0)
{
    if (i >= n / 2)
        return true;
    if (str[i] == str[n - i - 1])
        return checkPalindrome2(str, n, i + 1);
    return false;
}
int main()
{
    string s1 = "Hello";
    string s2 = "SOS";
    cout << "S1: " << checkPalindrome2(s1, s1.length()) << endl;
    cout << "S2: " << checkPalindrome2(s2, s2.length()) << endl;
    cout << "Enter a String : ";
    string s;
    cin >> s;
    cout << "s: " << checkPalindrome2(s, s.length());
    return 0;
}