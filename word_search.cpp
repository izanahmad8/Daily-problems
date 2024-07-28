int m, n;
bool find(vector<vector<char>> &board, int i, int j, string word, int idx)
{
    if (idx == word.size())
        return true;
    if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] == '$')
        return false;
    if (board[i][j] != word[idx])
        return false;
    char temp = board[i][j];
    board[i][j] = '$';
    if (find(board, i + 1, j, word, idx + 1) || find(board, i - 1, j, word, idx + 1) || find(board, i, j + 1, word, idx + 1) || find(board, i, j - 1, word, idx + 1))
    {
        return true;
    }
    board[i][j] = temp;
    return false;
}
bool exist(vector<vector<char>> &board, string word)
{
    m = board.size();
    n = board[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == word[0] && find(board, i, j, word, 0))
            {
                return true;
            }
        }
    }
    return false;
}