int isPerfectNumber(long long N)
{
    if (N == 1)
    {
        return 0;
    }
    long long sum = 1;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            sum += i + N / i;
        }
    }
    return (sum == N);
}