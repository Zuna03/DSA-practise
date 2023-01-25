#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<char>> &board, string &word, int i, int j, int k)
{
    int row = board.size(), col = board[0].size();
    if (i < 0 || j < 0 || i > row - 1 || j > col - 1 || board[i][j] != word[k])
        return false;
    char ch = board[i][j];
    word[k] = '$';
    bool op1 = search(board, word, i + 1, j, k + 1);
    bool op2 = search(board, word, i - 1, j, k + 1);
    bool op3 = search(board, word, i, j + 1, k + 1);
    bool op4 = search(board, word, i, j - 1, k + 1);

    return op1 || op2 || op3 || op4;
}
bool exist(vector<vector<char>> &board, string word)
{
    int ptr = 0, row = board.size(), col = board[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (search(board, word, i, j, 0))
                return true;
        }
    }
    return false;
}

int main()
{

    return 0;
}