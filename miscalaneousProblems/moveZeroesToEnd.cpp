#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> nums)
{
    int n = nums.size();
    int x = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            nums.push_back(0);
        }
    }
}
int main()
{
    vector<int> v = {1, 2, 0, 3, 4, 0, 6, 7, 0, 8, 0, 0, 0, 11, 12, 23, 4, 5};
    moveZeroes(v);
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}