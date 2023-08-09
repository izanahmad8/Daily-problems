long long int largestPrimeFactor(int N)
{
    long ans = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            N /= i;
            i--;
        }
    }
    ans = N;
    return ans;
}