int check(vector<int> &cost, int i, int total, vector<vector<int>> &dp, int n)
{
    if (i >= n)
    {
        return 0;
    }
    if (dp[i][total] != -1)
    {
        return dp[i][total];
    }
    if (total >= cost[i])
    {
        int price = cost[i] - floor(0.9 * cost[i]);
        return dp[i][total] = max(1 + check(cost, i + 1, total - price, dp, n), check(cost, i + 1, total, dp, n));
    }
    return dp[i][total] = check(cost, i + 1, total, dp, n);
}
int max_courses(int n, int total, vector<int> &cost)
{
    vector<vector<int>> dp(n, vector<int>(total + 1, -1));
    return check(cost, 0, total, dp, n);
}