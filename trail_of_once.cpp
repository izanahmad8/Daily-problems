int numberOfConsecutiveOnes(int n)
{
    if (n == 2)
        return 1;
    int a = 0, b = 1;
    int ans = 1;
    int mod = 1e9 + 7;
    for (int i = 3; i <= n; i++)
    {
        int c = (a + b) % mod;
        a = b;
        b = c;
        ans = ((ans * 2) % mod + c) % mod;
    }
    return ans;
}