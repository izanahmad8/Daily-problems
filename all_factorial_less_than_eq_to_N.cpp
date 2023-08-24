long long fact(long long N)
{
    if (N == 0)
    {
        return 1;
    }
    return N * fact(N - 1);
}
vector<long long> factorialNumbers(long long N)
{
    vector<long long> v;
    long long res = 0;
    for (int i = 1; i <= N; i++)
    {
        res = fact(i);
        if (res <= N)
        {
            v.push_back(res);
        }
        else
        {
            break;
        }
    }
    return v;
}