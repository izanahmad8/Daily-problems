int solve(int i, int s, int n, int target, vector<int> &arr, vector<vector<int>> &dp, int sum)
{
    if (i == n)
        return s == target ? 1 : 0;
    if (dp[i][s + sum] != -1)
        return dp[i][s + sum];
    int take = solve(i + 1, s + arr[i], n, target, arr, dp, sum);
    int noTake = solve(i + 1, s - arr[i], n, target, arr, dp, sum);
    return dp[i][s + sum] = take + noTake;
}
int totalWays(vector<int> &arr, int target)
{
    int n = arr.size();
    int sum = accumulate(arr.begin(), arr.end(), 0);
    vector<vector<int>> dp(n, vector<int>(2 * sum + 1, -1));
    return solve(0, 0, n, target, arr, dp, sum);
}