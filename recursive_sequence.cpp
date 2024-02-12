long long sequence(int n)
{
    int mod = 1000000007;
    long long ans = 0;
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        long long add = 1;
        for (int j = 0; j < i; j++)
        {
            add = (add * start) % mod;
            start++;
        }
        ans = (ans + add) % mod;
    }
    return ans;
}