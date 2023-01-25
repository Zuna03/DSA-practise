#include <bits/stdc++.h>

using namespace std;

// bool containsDuplicate(vector<int> &nums)
// {
//     bool contains = false;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] == nums[j])
//                 contains = true;
//         }
//     }
//     return contains;
// }

// better TC
bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] == nums[i])
            return true;
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    if (containsDuplicate(nums))
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}
