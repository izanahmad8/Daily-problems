int countWays(int n)
{
    int mod = 1e9 + 7;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    int a = 1;
    int b = 2;
    for (int i = 3; i <= n; i++)
    {
        int c = (a + b) % mod;
        a = b;
        b = c;
    }
    return b % mod;
}