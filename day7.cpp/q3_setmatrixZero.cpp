#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();    // rows
    int m = matrix[0].size(); // col

    int row = 0, col = 0;

    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0] == 0)
            col = 1;
    }
    for (int i = 0; i < m; i++)
    {
        if (matrix[0][i] == 0)
            row = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (matrix[i][0] == 0)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    for (int i = 1; i < m; i++)
    {
        if (matrix[0][i] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if (row)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[0][i] = 0;
        }
    }
    if (col)
    {
        for (int i = 0; i < m; i++)
        {
            matrix[i][0] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    vector<vector<int>> matrix{{0, 1, 2, 0},
                               {3, 4, 5, 2},
                               {1, 3, 1, 5}};

    setZeroes(matrix);
    return 0;
}