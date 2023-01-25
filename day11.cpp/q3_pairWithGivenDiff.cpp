#include <bits/stdc++.h>
using namespace std;

bool findPair(int arr[], int size, int n)
{
    sort(arr, arr + size);
    int i = 0, j = 1;
    while (i < size && j < size)
    {
        if (i != j || arr[j] - arr[i] == n || arr[i] - arr[j] == n)
            return true;

        else if (arr[j] - arr[i] < n)
            j++;

        else
            i++;
    }
    return false;
}

int main()
{
    int arr[] = {5, 20, 3, 2, 5, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 71;

    if (findPair(arr, n, x))
        cout << "yes";
    else
        cout << "no";

    return 0;
}