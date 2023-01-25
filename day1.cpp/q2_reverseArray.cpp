#include <bits/stdc++.h>

using namespace std;

int *reverseArray(int n, int arr[], int low, int high)
{
    int temp;
    while (low <= high)
    {
        temp = arr[high];
        arr[high] = arr[low];
        arr[low] = temp;

        low++;
        high--;
    }

    return arr;
}

int main()
{
    int arr[] = {1, 2, 3, 4};

    int *ans = reverseArray(4, arr, 0, 3);
    for (int i = 0; i < 4; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}