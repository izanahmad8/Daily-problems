bool isSubsetSum(vector<int> arr, int sum)
{
    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
    return solve(arr, 0, sum, n, dp);
}
bool solve(vector<int> arr, int i, int sum, int n, vector<vector<int>> &dp)
{
    if (i == n)
    {
        if (sum == 0)
        {
            return 1;
        }
        return 0;
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    int take = 0;
    if (sum >= arr[i])
    {
        take = solve(arr, i + 1, sum - arr[i], n, dp);
    }
    int notake = solve(arr, i + 1, sum, n, dp);
    return dp[i][sum] = take + notake;
}