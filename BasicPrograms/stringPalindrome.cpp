#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void transform(string &s)
    {
        string result;
        for (auto i : s)
        {
            if (isalnum(i))
            {
                result += tolower(i);
            }
        }
        s.swap(result);
    }
    bool isPalindrome(string s)
    {
        transform(s);
        int n = s.length();
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
                return false;
        }
        return true;
    }
};
int main()
{
    Solution sol;
    string s = "A man, a plan, a canal: Panama";
    cout << sol.isPalindrome(s);
    return 0;
}