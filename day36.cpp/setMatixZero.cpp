#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    // int count = 0;
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix[0].size(); j++)
    //     {
    //         if (matrix[i][j] == 0)
    //             count++;
    //     }
    // }

    // vector<int> r, c;
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix[0].size(); j++)
    //     {
    //         if (matrix[i][j] == 0)
    //         {
    //             r.push_back(i);
    //             c.push_back(j);
    //         }
    //     }
    // }

    // for (int i = 0; i < r.size(); i++)
    // {
    //     int row1 = r[i];
    //     for (int j = 0; j < col; j++)
    //     {
    //         matrix[row1][j] = 0;
    //     }
    //     int col1 = c[i];
    //     for (int j = 0; j < row; j++)
    //     {
    //         matrix[j][col1] = 0;
    //     }
    // }

    int col1 = 0;
    for (int i = 0; i < row; i++)
    {
        if (matrix[i][0] == 0)
            col1 = 0;
        for (int j = 1; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }
    for (int i = row - 1; i >= 0; i--)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
        if (col1 == 0)
            matrix[i][0] = 0;
    }
}
int main()
{
    vector<vector<int>> m = {{1, 1, 1}, {1, 0, 1}, {0, 1, 1}};
    setZeroes(m);

    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[0].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}