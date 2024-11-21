int countUnguarded(int m, int n, vector<vector<int>> &guards, vector<vector<int>> &walls)
{
    vector<vector<int>> vis(m, vector<int>(n, 0));
    for (auto val : walls)
    {
        vis[val[0]][val[1]] = 2;
    }
    for (auto val : guards)
    {
        vis[val[0]][val[1]] = 3;
    }
    for (auto val : guards)
    {
        int row = val[0], col = val[1];
        for (int i = row + 1; i < m; i++)
        {
            if (vis[i][col] == 2 || vis[i][col] == 3)
                break;
            vis[i][col] = 1;
        }
        for (int i = row - 1; i >= 0; i--)
        {
            if (vis[i][col] == 2 || vis[i][col] == 3)
                break;
            vis[i][col] = 1;
        }
        for (int i = col + 1; i < n; i++)
        {
            if (vis[row][i] == 2 || vis[row][i] == 3)
                break;
            vis[row][i] = 1;
        }
        for (int i = col - 1; i >= 0; i--)
        {
            if (vis[row][i] == 2 || vis[row][i] == 3)
                break;
            vis[row][i] = 1;
        }
    }
    int unguarded = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j] == 0)
                unguarded++;
        }
    }
    return unguarded;
}