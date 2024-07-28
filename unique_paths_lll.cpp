int nonObs = 0;
int path = 0;
int n, m;
void find(vector<vector<int>> &grid, int count, int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == -1)
    {
        return;
    }
    if (grid[i][j] == 2)
    {
        if (count == nonObs)
        {
            path++;
        }
        return;
    }
    grid[i][j] = -1;
    find(grid, count + 1, i + 1, j);
    find(grid, count + 1, i - 1, j);
    find(grid, count + 1, i, j + 1);
    find(grid, count + 1, i, j - 1);
    grid[i][j] = 0;
}
int uniquePathsIII(vector<vector<int>> &grid)
{
    int x = 0, y = 0;
    n = grid.size();
    m = grid[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
            {
                nonObs++;
                x = i;
                y = j;
            }
            if (grid[i][j] == 0)
            {
                nonObs++;
            }
        }
    }
    find(grid, 0, x, y);
    return path;
}