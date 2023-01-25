#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m = 5, n = 4;
    int arr[m][n] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16},
                     {17, 18, 19, 20}};

    int k, j;
    for (int i = 0; i <= m - 1; i++)
    {
        k = i;
        j = 0;
        while (k >= 0)
        {
            cout << arr[k][j] << " ";
            k--;
            j++;
        }
        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        j = i;
        k = m - 1;

        while (j <= n - 1)
        {
            cout << arr[k][j] << " ";
            k--;
            j++;
        }
        cout << endl;
    }

    return 0;
}