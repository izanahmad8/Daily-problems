int rob(vector<int> &arr, int i, int n, vector<int> &dp)
{
    if (i >= n)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int take = arr[i] + rob(arr, i + 2, n, dp);
    int no_take = rob(arr, i + 1, n, dp);
    return dp[i] = max(take, no_take);
}
int maxValue(vector<int> &arr)
{
    int n = arr.size();
    vector<int> dp1(n, -1);
    vector<int> dp2(n, -1);
    int a = rob(arr, 0, n - 1, dp1);
    int b = rob(arr, 1, n, dp2);
    return max(a, b);
}