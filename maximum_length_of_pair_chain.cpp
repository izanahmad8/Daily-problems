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

// bottom-up approach
int findLongestChain(vector<vector<int>> &pairs)
{
    int n = pairs.size();
    sort(pairs.begin(), pairs.end());
    vector<int> dp(n, 1);
    int maxLis = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (pairs[i][0] > pairs[j][1])
            {
                dp[i] = max(dp[i], dp[j] + 1);
                maxLis = max(maxLis, dp[i]);
            }
        }
    }
    return maxLis;
}