int solve(int i, int j, vector<vector<int>> &Matrix, int N, vector<vector<int>> &dp)
{
    if (i >= N || j >= N || i < 0 || j < 0)
    {
        return 0;
    }
    if (dp[i][j] != -1)
        return dp[i][j];
    int d = Matrix[i][j] + solve(i + 1, j, Matrix, N, dp);
    int dL = Matrix[i][j] + solve(i + 1, j - 1, Matrix, N, dp);
    int dR = Matrix[i][j] + solve(i + 1, j + 1, Matrix, N, dp);
    return dp[i][j] = max({d, dL, dR});
}
int maximumPath(int N, vector<vector<int>> Matrix)
{
    int maxi = 0;
    vector<vector<int>> dp(N + 1, vector<int>(N + 1, -1));
    for (int j = 0; j < N; j++)
    {
        maxi = max(maxi, solve(0, j, Matrix, N, dp));
    }
    return maxi;
}