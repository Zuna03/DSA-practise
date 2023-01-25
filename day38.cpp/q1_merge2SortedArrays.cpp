#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    int gap = ceil(n + m / 2);
    int ptr1, ptr2;
    while (gap >= 1)
    {
        ptr1 = 0;
        ptr2 = ptr1 + gap;
        while (ptr2 <= n + m - 1)
        {
            ptr2 = ptr1 + gap;
            if (ptr2 >= n)
            {
                ptr2 = ptr1 - n;
                if (arr1[ptr1] > arr2[ptr2])
                {
                    int temp = arr2[ptr2];
                    arr2[ptr2] = arr1[ptr1];
                    arr1[ptr1] = temp;
                    ptr1++;
                }
                else
                {
                    ptr1++;
                }
            }
            else
            {
                if (arr1[ptr1] > arr1[ptr2])
                {
                    int temp = arr1[ptr2];
                    arr1[ptr2] = arr1[ptr1];
                    arr1[ptr1] = temp;
                    ptr1++;
                }
                else
                {
                    ptr1++;
                }
            }
        }
        gap = ceil(gap / 2);
    }
}
int main()
{
    int n = 4;
    long long arr1[] = {1, 3, 5, 7};
    int m = 5;
    long long arr2[] = {0, 2, 6, 8, 9};

    merge(arr1, arr2, n, m);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}