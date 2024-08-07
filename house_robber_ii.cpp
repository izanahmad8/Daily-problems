// top down appraoch
int solve(int i, vector<int> &nums, vector<int> &dp, int n)
{
    if (i >= n)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int take = nums[i] + solve(i + 2, nums, dp, n);
    int noTake = solve(i + 1, nums, dp, n);
    return dp[i] = max(take, noTake);
}
int rob(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
    if (n == 2)
        return max(nums[0], nums[1]);
    vector<int> dp(n + 1, -1);
    int take_0th = solve(0, nums, dp, n - 1);
    fill(dp.begin(), dp.end(), -1);
    int noTake_0th = solve(1, nums, dp, n);
    return max(take_0th, noTake_0th);
}

// bottom up approach
int rob(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
    if (n == 2)
        return max(nums[0], nums[1]);
    vector<int> dp(n + 1, 0);
    dp[1] = nums[0];
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(nums[i - 1] + dp[i - 2], dp[i - 1]);
    }
    int take = dp[n - 1];
    fill(dp.begin(), dp.end(), 0);
    dp[2] = nums[1];
    for (int i = 3; i <= n; i++)
    {
        dp[i] = max(nums[i - 1] + dp[i - 2], dp[i - 1]);
    }
    int no_take = dp[n];
    return max(take, no_take);
}