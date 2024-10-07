int solve(int arr[], int n, int sum, int i, vector<vector<int>> &dp)
{
    if (sum < 0 || i >= n)
    {
        return 0;
    }
    if (sum == 0)
    {
        return 1;
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    int take = solve(arr, n, sum - arr[i], i + 1, dp);
    int no_take = solve(arr, n, sum, i + 1, dp);
    return dp[i][sum] = take + no_take;
}
int equalPartition(int N, int arr[])
{
    int sum = accumulate(arr, arr + N, 0);
    vector<vector<int>> dp(N + 1, vector<int>(sum + 1, -1));
    if (sum % 2 != 0)
    {
        return 0;
    }
    return solve(arr, N, sum / 2, 0, dp);
}