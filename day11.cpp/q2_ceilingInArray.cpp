#include <bits/stdc++.h>
using namespace std;

int ceiling(int arr[], int n, int x, int low, int high)
{
    if (x == 0)
        return -1;
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}
int main()
{
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int ans = ceiling(arr, n, x, 0, n - 1);
    cout << arr[ans];

    return 0;
}