int n, m;
vector<int> direction = {-1, 0, 1};
int solve(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    int moves = 0;
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    for (int &dir : direction)
    {
        int new_i = i + dir;
        int new_j = j + 1;
        if (new_i >= 0 && new_i < m && new_j >= 0 && new_j < n && grid[new_i][new_j] > grid[i][j])
        {
            moves = max(moves, 1 + solve(new_i, new_j, grid, dp));
        }
    }
    return dp[i][j] = moves;
}
int maxMoves(vector<vector<int>> &grid)
{
    m = grid.size();
    n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        res = max(res, solve(i, 0, grid, dp));
    }
    return res;
}