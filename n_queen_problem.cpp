vector<vector<int>> res;
vector<vector<int>> nQueen(int n)
{
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<int> path(n, 0);
    solve(board, 0, path);
    return res;
}
void solve(vector<vector<int>> &board, int row, vector<int> &path)
{
    if (row >= board.size())
    {
        res.push_back(path);
        return;
    }
    for (int col = 0; col < board.size(); col++)
    {
        if (isValid(board, row, col))
        {
            board[row][col] = 1;
            path[row] = col + 1;
            solve(board, row + 1, path);
            board[row][col] = 0;
        }
    }
}
bool isValid(vector<vector<int>> &board, int row, int col)
{
    for (int i = row - 1; i >= 0; i--)
    {
        if (board[i][col] == 1)
        {
            return false;
        }
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < board.size(); i--, j++)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }
    return true;
}