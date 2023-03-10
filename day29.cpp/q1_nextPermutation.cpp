#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int idx = -1;
    for (int i = nums.size() - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        sort(nums.begin(), nums.end());
        return;
    }
    else
    {
    int prev = idx;
    for (int i = idx + 1; i < nums.size(); i++)
    {
        if (nums[i] > nums[idx - 1] && nums[i] <= nums[prev])
        {
            prev = i;
        }
    }
    swap(nums[idx - 1], nums[prev]);
    sort(nums.begin() + idx, nums.end());
    }
}
int main()
{

    return 0;
}