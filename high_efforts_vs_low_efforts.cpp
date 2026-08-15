int maxTask(vector<int> &h, vector<int> &l)
{
    int n = h.size();
    if (n == 1)
        return max(h[0], l[0]);
    vector<int> dp(n, 0);
    dp[0] = max(h[0], l[0]);
    dp[1] = max(dp[0] + l[1], h[1]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1] + l[i], dp[i - 2] + h[i]);
    }
    return dp[n - 1];
}