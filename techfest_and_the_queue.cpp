int sumOfPowers(int a, int b)
{
    int res = 0;
    for (int i = a; i <= b; i++)
    {
        res += primes(i);
    }
    return res;
}
int primes(int x)
{
    int ans = 0;
    for (int i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            ans++;
            x = x / i;
        }
    }
    if (x != 1)
    {
        ans++;
    }
    return ans;
}