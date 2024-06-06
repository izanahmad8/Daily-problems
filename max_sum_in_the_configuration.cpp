long long max_sum(int a[], int n)
{
    long long sum = 0;
    long long csum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        csum += (long long)a[i] * i;
    }
    long long ans = csum;
    for (int i = 0; i < n; i++)
    {
        csum = csum - sum + (long long)n * a[i];
        ans = max(ans, csum);
    }
    return ans;
}