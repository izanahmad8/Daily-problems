long long sumMatrix(long long n, long long q)
{
    long long ans = n - abs(n + 1 - q);
    return ans < 0 ? 0 : ans;
}