#include <bits/stdc++.h>

using namespace std;

int chocDistribution(vector<int> &nums, int m)
{
    sort(nums.begin(), nums.end());
    int minDiff = INT_MAX;
    for (int i = 0; i + m <= nums.size(); i++)
    {
        minDiff = min(minDiff, nums[i + m - 1] - nums[i]);
    }
    return minDiff;
}
int main()
{
    vector<int> nums = {3, 4, 1, 9, 56, 7, 9, 12};
    int m = 5;

    cout << "Min difference " << chocDistribution(nums, m);

    return 0;
}