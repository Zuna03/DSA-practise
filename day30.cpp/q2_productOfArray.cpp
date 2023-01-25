#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> ans(nums.size());
    int product = 1;
    bool isZero = false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            isZero = true;
            continue;
        }

        product *= nums[i];
    }
    cout << product << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            if (isZero)
                ans[i] = 0;
            else
                ans[i] = product / nums[i];
        }
        else
        {
            ans[i] = product;
        }
    }
    return ans;
}
int main()
{
    vector<int> n = {-1,1,0,-3,3};
    vector<int> ans = productExceptSelf(n);
    for (int i = 0; i < n.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}