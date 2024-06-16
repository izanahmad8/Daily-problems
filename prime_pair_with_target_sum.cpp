vector<int> getPrimes(int n)
{
    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    int a = -1, b = -1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (prime[i] && prime[n - i])
        {
            a = i;
            b = n - i;
            return {a, b};
        }
    }
    return {a, b};
}