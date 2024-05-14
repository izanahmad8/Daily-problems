vector<vector<int>> direction = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
int getMaximumGold(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    int maxGold = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] != 0)
            {
                maxGold = max(maxGold, DFS(grid, i, j, m, n));
            }
        }
    }
    return maxGold;
}
int DFS(vector<vector<int>> &grid, int i, int j, int m, int n)
{
    if (i >= m || i < 0 || j >= n || j < 0 || grid[i][j] == 0)
    {
        return 0;
    }
    int goldValue = grid[i][j];
    grid[i][j] = 0;
    int maxGold = 0;
    for (vector<int> &dir : direction)
    {
        int k = i + dir[0];
        int l = j + dir[1];
        maxGold = max(maxGold, DFS(grid, k, l, m, n));
    }
    grid[i][j] = goldValue;
    return goldValue + maxGold;
}