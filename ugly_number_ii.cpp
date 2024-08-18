// bottom_up approach
int nthUglyNumber(int n)
{
    vector<int> dp(n + 1, 0);
    dp[1] = 1;
    int p1 = 1;
    int p2 = 1;
    int p3 = 1;
    for (int i = 2; i <= n; i++)
    {
        int a = dp[p1] * 2;
        int b = dp[p2] * 3;
        int c = dp[p3] * 5;
        dp[i] = min({a, b, c});
        if (dp[i] == a)
        {
            p1++;
        }
        if (dp[i] == b)
        {
            p2++;
        }
        if (dp[i] == c)
        {
            p3++;
        }
    }
    return dp[n];
}