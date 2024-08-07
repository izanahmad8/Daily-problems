int solve(int arr[], int n, int i, int prev, vector<vector<int>> &dp)
{
    if (i >= n)
        return 0;
    if (dp[i][prev + 1] != -1)
        return dp[i][prev + 1];
    int noTake = solve(arr, n, i + 1, prev, dp);
    int take = 0;
    if (prev == -1 || arr[i] > arr[prev])
    {
        take = arr[i] + solve(arr, n, i + 1, i, dp);
    }
    return dp[i][prev + 1] = max(take, noTake);
}
int maxSumIS(int arr[], int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return solve(arr, n, 0, -1, dp);
}