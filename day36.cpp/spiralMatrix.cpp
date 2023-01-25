#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int top = 0, down = row - 1, left = 0, right = col - 1, dir = 0;
    while (down >= top && right >= left)
    {
        if (dir == 0)
        {
            for (int i = left; i <= right; i++)
            {
                cout << matrix[top][i] << " ";
            }
            cout << endl;
        }
        else if (dir == 1)
        {
            for (int i = top; i <= down; i++)
            {
            }
        }
    }
}
int main()
{

    return 0;
}