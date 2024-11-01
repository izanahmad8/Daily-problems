string gridChallenge(vector<string> grid)
{
    int n = grid.size();
    for (int i = 0; i < n; i++)
    {
        sort(grid[i].begin(), grid[i].end());
    }
    for (int col = 0; col < n; col++)
    {
        for (int row = 1; row < n; row++)
            if (grid[row][col] < grid[row - 1][col])
                return "NO";
    }
    return "YES";
}