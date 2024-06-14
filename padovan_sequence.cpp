int mod = 1e9 + 7;
int padovanSequence(int n)
{
    int a = 1, b = 1, c = 1;
    for (int i = 3; i <= n; i++)
    {
        int curr = 0;
        curr = ((b % mod) + (c % mod)) % mod;
        c = b;
        b = a;
        a = curr;
    }
    return a;
}