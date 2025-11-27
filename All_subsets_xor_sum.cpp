int solve(vector<int> &arr, int x, int i, vector<vector<int>> &dp)
{
    if (i == arr.size())
    {
        return x;
    }
    if (dp[i][x] != -1)
    {
        return dp[i][x];
    }
    int take = solve(arr, x ^ arr[i], i + 1, dp);
    int noTake = solve(arr, x, i + 1, dp);
    return dp[i][x] = take + noTake;
}

int subsetXORSum(vector<int> &arr)
{
    int n = arr.size();
    int sum = accumulate(arr.begin(), arr.end(), 0);
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
    return solve(arr, 0, 0, dp);
}