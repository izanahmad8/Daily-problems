int n;
int solve(vector<int> &piles, int person, int i, int M, vector<vector<vector<int>>> &dp)
{
    if (i >= n)
    {
        return 0;
    }
    if (dp[person][i][M] != -1)
    {
        return dp[person][i][M];
    }
    int stones = 0;
    int res = (person == 1) ? -1 : INT_MAX;
    for (int x = 1; x <= min(2 * M, n - i); x++)
    {
        stones += piles[i + x - 1];
        if (person == 1)
        {
            res = max(res, stones + solve(piles, 0, i + x, max(M, x), dp));
        }
        else
        {
            res = min(res, solve(piles, 1, i + x, max(M, x), dp));
        }
    }
    return dp[person][i][M] = res;
}
int stoneGameII(vector<int> &piles)
{
    n = piles.size();
    vector<vector<vector<int>>> dp(2, vector<vector<int>>(n + 1, vector<int>(n + 1, -1)));
    return solve(piles, 1, 0, 1, dp);
}