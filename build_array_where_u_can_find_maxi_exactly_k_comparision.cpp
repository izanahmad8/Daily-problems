const int mod = 1e9 + 7;
int solve(int n, int m, int k, int idx, int s_cost, int maxi, vector<vector<vector<int>>> &dp)
{
    if (idx == n)
    {
        if (s_cost == k)
        {
            return 1;
        }
        return 0;
    }
    if (dp[idx][s_cost][maxi] != -1)
    {
        return dp[idx][s_cost][maxi];
    }
    int res = 0;
    for (int i = 1; i <= m; i++)
    {
        if (i > maxi)
        {
            res = (res + solve(n, m, k, idx + 1, s_cost + 1, i, dp)) % mod;
        }
        else
        {
            res = (res + solve(n, m, k, idx + 1, s_cost, maxi, dp)) % mod;
        }
    }
    return dp[idx][s_cost][maxi] = res % mod;
}
int numOfArrays(int n, int m, int k)
{
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(n + 1, vector<int>(m + 1, -1)));
    return solve(n, m, k, 0, 0, 0, dp);
}