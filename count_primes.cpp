int countPrimes(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    vector<int> v(n, 0);
    for (int i = 2; i < sqrt(n); i++)
    {
        if (v[i] == 0)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                v[j] = 1;
            }
        }
    }
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (v[i] == 0)
        {
            count++;
        }
    }
    return count;
}