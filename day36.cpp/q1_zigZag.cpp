#include <bits/stdc++.h>
using namespace std;

// void printZigZag(int r, int c, int **arr)
// {

// }
int main()
{
    int r = 5, c = 4;
    int arr[r][c] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
    };
    for (int i = 0; i < r; i++)
    {
        int k = i;
        int j = 0;
        while (k >= 0)
        {
            cout << arr[k][j] << " ";
            k--;
            j++;
        }
        cout << endl;
    }
    for (int i = 1; i < c; i++)
    {
        int k = r - 1;
        int j = i;
        while (j < c)
        {
            cout << arr[k][j] << " ";
            k--;
            j++;
        }
        cout << endl;
    }

    return 0;
}