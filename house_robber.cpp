// top down approach
int solve(int i, vector<int> &nums, vector<int> &dp)
{
    if (i >= nums.size())
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int take = nums[i] + solve(i + 2, nums, dp);
    int noTake = solve(i + 1, nums, dp);
    return dp[i] = max(take, noTake);
}
int rob(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n + 1, -1);
    return solve(0, nums, dp);
}

// bottom up approach
int rob(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = nums[0];
    for (int i = 2; i <= n; i++)
    {
        dp[i] = max(nums[i - 1] + dp[i - 2], dp[i - 1]);
    }
    return dp[n];
}