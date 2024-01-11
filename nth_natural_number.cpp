long long findNth(long long N)
{
    long long ans = 0;
    long long temp = 1;
    while (N)
    {
        ans = ans + N % 9 * temp;
        N /= 9;
        temp *= 10;
    }
    return ans;
}