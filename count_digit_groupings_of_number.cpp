int TotalCount(string str)
{
    int n = str.length();
    vector<vector<int>> dp(n, vector<int>(901, -1));
    return solve(0, 0, str, dp);
}
int solve(int i, int sum, string &str, vector<vector<int>> &dp)
{
    if (i == str.length())
    {
        return 1;
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    int x = 0, ans = 0;
    for (int ind = i; ind < str.length(); ind++)
    {
        x += (str[ind] - '0');
        if (x >= sum)
        {
            ans += solve(ind + 1, x, str, dp);
        }
    }
    return dp[i][sum] = ans;
}