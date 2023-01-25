#include <bits/stdc++.h>
using namespace std;

bool permuteArray(int arr1[], int arr2[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr1[i] + arr2[i];
        if (sum >= k)
            return true;
    }

    return false;
}
int main()
{
    int a[] = {1, 2, 2, 1},  b[] = { 3, 3, 3, 4 }, k = 10, n = 3;

    if (permuteArray(a, b, n, k))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}