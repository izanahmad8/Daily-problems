int solve(vector<int> &prices, int i, int buy, int k, vector<vector<vector<int>>> &dp)
{
    if (i == prices.size() || k == 0)
    {
        return 0;
    }
    if (dp[i][buy][k] != -1)
    {
        return dp[i][buy][k];
    }
    int take, no_take;
    if (buy)
    {
        take = -prices[i] + solve(prices, i + 1, 0, k, dp);
        no_take = solve(prices, i + 1, 1, k, dp);
    }
    else
    {
        take = prices[i] + solve(prices, i + 1, 1, k - 1, dp);
        no_take = solve(prices, i + 1, 0, k, dp);
    }
    return dp[i][buy][k] = max(take, no_take);
}
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
    return solve(prices, 0, 1, 2, dp);
}