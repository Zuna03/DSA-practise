#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> res;
    int top = 0, down = m - 1, left = 0, right = n - 1, dir = 0;

    while (down >= top && right >= left)
    {
        if (dir == 0)
        {
            for (int i = left; i <= right; i++)
            {
                res.push_back(matrix[top][i]);
            }
            top++;
        }
        else if (dir == 1)
        {
            for (int i = top; i <= down; i++)
            {
                res.push_back(matrix[i][right]);
            }
            right--;
        }
        else if (dir == 2)
        {
            for (int i = right; i >= left; i--)
            {
                res.push_back(matrix[down][i]);
            }
            down--;
        }
        else
        {
            for (int i = down; i >= top; i--)
            {
                res.push_back(matrix[i][left]);
            }
            left++;
        }
        dir = (dir + 1) % 4;
    }
    return res;
}

int main()
{
    vector<vector<int>> matrix{{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    vector<int> res = spiralOrder(matrix);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}