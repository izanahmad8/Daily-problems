int minSteps(int N)
{
    vector<int> dp(N + 1, INT_MAX);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for (int i = 4; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            dp[i] = 1 + dp[i / 2];
        }
        if (i % 3 == 0)
        {
            dp[i] = 1 + dp[i / 3];
        }
        dp[i] = min(dp[i], 1 + dp[i - 1]);
    }
    return dp[N];
}