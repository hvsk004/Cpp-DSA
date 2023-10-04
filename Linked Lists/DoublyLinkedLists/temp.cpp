#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> pattern(int N)
    {
        vector<int> A;  // Declare the vector A as a local variable
        A.push_back(N); // Initialize the vector with the first element
        int count = 0;

        while (A[count] != N)
        {
            if (A[count] > 0)
            {
                A.push_back(A[count] - 5);
            }
            else
            {
                A.push_back(A[count] + 5);
            }
            count++;
        }

        return A;
    }
};

int main()
{
    int n = 16;
    Solution obj;
    vector<int> v = obj.pattern(n);
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}
