int findMaxSum(vector<int> &arr, int n)
{
    vector<int> dp(n + 1, -1);
    return solve(arr, 0, n, dp);
}
int solve(vector<int> &arr, int i, int n, vector<int> &dp)
{
    if (i >= n)
    {
        return 0;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    return dp[i] = max(arr[i] + solve(arr, i + 2, n, dp), solve(arr, i + 1, n, dp));
}