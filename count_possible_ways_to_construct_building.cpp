int TotalWays(int N)
{
    long long b = 1, s = 1, res = 2;
    for (int i = 2; i <= N; i++)
    {
        b = s;
        s = res;
        res = (b + s) % 1000000007;
    }
    return (res * res) % 1000000007;
}