// top down approach
long long solve(int i, bool isEven, vector<int> &nums, vector<vector<long long>> &dp)
{
    if (i >= nums.size())
        return 0;
    if (dp[i][isEven] != -1)
    {
        return dp[i][isEven];
    }
    long long skip = solve(i + 1, isEven, nums, dp);
    long long val = nums[i];
    if (!isEven)
    {
        val = -val;
    }
    long long take = solve(i + 1, !isEven, nums, dp) + val;
    return dp[i][isEven] = max(take, skip);
}
long long maxAlternatingSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<long long>> dp(n + 1, vector<long long>(2, -1));
    return solve(0, true, nums, dp);
}

// BOTTOM UP APPROACH

long long maxAlternatingSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = max(dp[i - 1][1] - nums[i - 1], dp[i - 1][0]);
        dp[i][1] = max(dp[i - 1][0] + nums[i - 1], dp[i - 1][1]);
    }
    return max(dp[n][0], dp[n][1]);
}