#include <bits/stdc++.h>
using namespace std;

void permute(vector<int> &nums, int l, int r)
{

    if (l == r)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    for (int i = l; i <= r; i++)
    {
        swap(nums[i], nums[l]);
        permute(nums, l + 1, r);
        swap(nums[i], nums[l]);
    }
}
int main()
{
    vector<int> v = {1, 2, 3};
    permute(v, 0, v.size() - 1);

    return 0;
}