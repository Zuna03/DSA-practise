// #include <bits/stdc++.h>

// using namespace std;

// int maxSubArraySum(int n, int arr[])
// {
//     vector<int> eachSum;
//     vector<int> maxSum;
//     int sum = 0;
//     int maxSumFound = INT_MIN;
//     if (n == 1)
//     {
//         return arr[0];
//     }
//     // if (n == 2)
//     // {
//     //     return max(arr[0], arr[1]);
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         sum = arr[i];
//         eachSum.push_back(sum);
//         for (int j = i + 1; j < n; j++)
//         {
//             sum += arr[j];
//             eachSum.push_back(sum);
//         }
//         for (int k = 0; k < eachSum.size(); k++)
//         {
//             maxSumFound = max(maxSumFound, eachSum[k]);
//         }
//         maxSum.push_back(maxSumFound);
//     }
//     for (int k = 0; k < maxSum.size(); k++)
//     {
//         maxSumFound = max(maxSumFound, maxSum[k]);
//     }
//     if (maxSumFound > arr[n - 1])
//         return maxSumFound;
//     else
//         return arr[n - 1];
// }

// int main()
// {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int ans = maxSubArraySum(9, arr);

//     cout << ans;

//     return 0;
// }

// Kadanes Algo

#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int> &nums)
{

    int max_sum = INT_MIN;
    int cur = 0;
    for (auto x : nums)
    {
        if (cur < 0)
            cur = 0;
        cur += x;
        max_sum = max(max_sum, cur);
    }
    return max_sum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums) << endl;

    return 0;
}