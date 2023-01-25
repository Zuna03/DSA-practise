#include <bits/stdc++.h>
using namespace std;

long long countTriplets(long long arr[], int n, long long sum)
{
    sort(arr, arr + n);
    int lo = 0, hi = n - 1, mid, s = 0, count = 0;
    while (lo < hi-1)
    {
        mid = (hi + lo) / 2;
        s = arr[lo] + arr[mid] + arr[hi];

        if (s > sum)
            hi--;

        else
        {
            while (mid < hi)
            {
                s = arr[lo] + arr[mid] + arr[hi];
                if (s <= sum)
                {
                    count++;
                    mid++;
                }
            }
            if (mid == hi)
            {
                lo++;
            }
        }
    }
    return count;
}
int main()
{
    int n = 4;
    long long arr[n] = {-2, 0, 1, 3};
    long long sum = 2;
    long long ans = countTriplets(arr, n, sum);
    cout<<ans;

    return 0;
}