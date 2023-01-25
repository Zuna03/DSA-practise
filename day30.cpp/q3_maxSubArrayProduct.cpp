#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int ma = nums[0], mi = nums[0], ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            swap(ma, mi);
        }
        ma = max(nums[i], ma * nums[i]);
        mi = min(nums[i], mi * nums[i]);
        ans = max(ans, ma);
    }
    return ans;
}
int main()
{
    vector<int> n = {2,3,-2,4};
    int x = maxProduct(n);
    cout << x << endl;

    return 0;
}