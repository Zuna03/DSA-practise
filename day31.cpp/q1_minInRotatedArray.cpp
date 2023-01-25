#include <bits/stdc++.h>
using namespace std;

// int MinELe(vector<int> nums, int l, int h)
// {
//     if (nums.size() == 1)
//         return nums[0];
//     if (nums.size() == 2)
//         return min(nums[0], nums[1]);
//     int mid = l + h / 2;
//     return MinELe(nums, l, mid - 1) && MinELe(nums, mid, h);
// }
// int findMin(vector<int> &nums)
// {
//     if (nums.size() == 1)
//         return nums[0];
//     if (nums.size() == 2)
//         return min(nums[0], nums[1]);
//     int l = 0, r = nums.size() - 1;
//     int mid = l + r / 2;
//     int left = MinELe(nums, l, mid - 1);
//     int right = MinELe(nums, mid, r);

//     return min(left, right);
// }

int findMin(vector<int> &arr)
{
    int s = 0, l = arr.size() - 1;
    if (arr[s] <= arr[l])
        return arr[0];

    while (s <= l)
    {
        int mid = s + l / 2;
        if (arr[mid] > arr[mid + 1])
            return arr[mid + 1];
        else if (arr[mid] < arr[mid - 1])
            return arr[mid];

        else if (arr[s] <= arr[mid])
            s = mid + 1;
        else if (arr[mid] <= arr[l])
            l = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> nums = {2, 3, 4, 5, 1};
    cout << findMin(nums);

    return 0;
}