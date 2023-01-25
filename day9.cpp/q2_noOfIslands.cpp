#include <bits/stdc++.h>
using namespace std;

void countPath(vector<vector<int>> &matrix, int i, int j, vector<vector<bool>> &visited)
{
    if (i < 0 || j < 0 || i >= matrix.size() || j >= matrix[0].size())
        return;
    if (matrix[i][j] == 0)
        return;
    if (!visited[i][j])
    {
        visited[i][j] = true;
        countPath(matrix, i + 1, j, visited);
        countPath(matrix, i, j + 1, visited);
        countPath(matrix, i, j - 1, visited);
        countPath(matrix, i - 1, j, visited);
        countPath(matrix, i - 1, j - 1, visited);
        countPath(matrix, i - 1, j + 1, visited);
        countPath(matrix, i + 1, j + 1, visited);
        countPath(matrix, i + 1, j - 1, visited);
    }
}
int countNo(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();

    vector<vector<bool>> visited(r, vector<bool>(c, false));
    int count = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (!visited[i][j] && matrix[i][j] == 1)
            {
                count++;
                countPath(matrix, i, j, visited);
            }
        }
    }

    return count;
}
int main()
{
    vector<vector<int>> matrix{{1, 1, 0, 0, 0},
                               {0, 1, 0, 0, 1},
                               {1, 0, 0, 1, 1},
                               {0, 0, 0, 0, 0},
                               {1, 0, 1, 0, 1}};

    int ans = countNo(matrix);
    cout << ans;

    return 0;
}