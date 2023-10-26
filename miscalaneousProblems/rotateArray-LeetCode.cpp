#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    vector<int> v;
    int n = nums.size();
    for (int i = k; i > 0; i--)
    {
        v.push_back(nums[n - i]);
    }
    for (int i = k; i < n; i++)
    {
        v.push_back(nums[i - k]);
    }
    for (int i : v)
    {
        cout << i << " ";
    }
    v.swap(nums);
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(a, k);
    for (int i : a)
    {
        cout << i << " ";
    }
    return 0;
}