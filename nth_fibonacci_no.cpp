int nthFibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    int res = 1, a = 1, b = 1;
    int mod = 1000000007;
    for (int i = 3; i <= n; i++)
    {
        res = (a + b) % mod;
        a = b;
        b = res;
    }
    return res;
}