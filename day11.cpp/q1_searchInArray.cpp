#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {20 ,40, 50}, K = 10, X = 6;
    cout << search(arr, sizeof(arr) / sizeof(arr[0]), X, K);

    return 0;
}