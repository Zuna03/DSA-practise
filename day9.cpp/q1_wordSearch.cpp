#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<char>> &board, string word, int idx, int i, int j, vector<vector<bool>> &visited)
{
    if (idx == word.length() - 1)
        return true;

    visited[i][j] = true;

    if (i > 0 && !visited[i - 1][j] && word[idx + 1] == board[i - 1][j] && search(board, word, idx + 1, i - 1, j, visited))
        return true;

    if (j > 0 && !visited[i][j - 1] && word[idx + 1] == board[i][j - 1] && search(board, word, idx + 1, i, j - 1, visited))
        return true;

    if (i < board.size() - 1 && !visited[i + 1][j] && word[idx + 1] == board[i + 1][j] && search(board, word, idx + 1, i + 1, j, visited))
        return true;

    if (j < board[0].size() - 1 && !visited[i][j + 1] && word[idx + 1] == board[i][j + 1] && search(board, word, idx + 1, i, j + 1, visited))
        return true;

    visited[i][j] = false;
    return false;
}

bool exist(vector<vector<char>> &board, string word)
{
    int n = board.size();    // row
    int m = board[0].size(); // col

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == word[0] && search(board, word, 0, i, j, visited))
                return true;
        }
    }
    return false;
}
int main()
{
    vector<vector<char>> board{{'A', 'B', 'C', 'E'},
                               {'S', 'F', 'C', 'S'},
                               {'A', 'D', 'E', 'E'}};

    string word = "ABCCED";
    if (exist(board, word))
        cout << "true";
    else
        cout << "false";

    return 0;
}