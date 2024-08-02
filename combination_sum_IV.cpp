int solve(int i, vector<int> &nums, int target, vector<vector<int>> &dp)
{
    if (target == 0)
    {
        return 1;
    }
    if (i >= nums.size() || target < 0)
        return 0;
    if (dp[i][target] != -1)
    {
        return dp[i][target];
    }
    int take = solve(0, nums, target - nums[i], dp);
    int notake = solve(i + 1, nums, target, dp);
    return dp[i][target] = take + notake;
}
int combinationSum4(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
    return solve(0, nums, target, dp);
}