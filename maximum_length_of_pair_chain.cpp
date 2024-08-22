// top-down approach
int solve(vector<vector<int>> &pairs, int i, int prev, vector<vector<int>> &dp)
{
    if (i >= pairs.size())
    {
        return 0;
    }
    if (dp[i][prev + 1] != -1)
    {
        return dp[i][prev + 1];
    }
    int take = 0;
    if (prev == -1 || pairs[prev][1] < pairs[i][0])
    {
        take = 1 + solve(pairs, i + 1, i, dp);
    }
    int no_take = solve(pairs, i + 1, prev, dp);
    return dp[i][prev + 1] = max(take, no_take);
}
int findLongestChain(vector<vector<int>> &pairs)
{
    int n = pairs.size();
    vector<vector<int>> dp(n + 1, vector<int>(n, -1));
    sort(pairs.begin(), pairs.end());
    return solve(pairs, 0, -1, dp);
}