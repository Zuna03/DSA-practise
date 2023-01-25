#include <bits/stdc++.h>
using namespace std;

int FindMaxSum(int arr[], int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end());

    int prevIdx = v[v.size() - 1].second;
    int sum = v[v.size() - 1].first;
    int maxSum = INT_MIN;
    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (abs(prevIdx - v[i].second) > 1)
        {
            sum += v[i].first;
            maxSum = max(maxSum, sum);
            prevIdx = v[i].second;
        }
    }
    return maxSum;
}
int main()
{
    int n = 6;
    int arr[n] = {5, 5, 10, 100, 10, 5};
    int ans = FindMaxSum(arr, n);
    cout << ans;

    return 0;
}