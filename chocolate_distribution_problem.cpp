long long findMinDiff(vector<long long> a, long long n, long long m)
{
    long long diff = INT_MAX;
    sort(a.begin(), a.end());
    for (long long i = 0; i <= n - m; i++)
    {
        diff = min(diff, a[i + m - 1] - a[i]);
    }
    return diff;
}