int equilibriumPoint(long long a[], int n)
{
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    long leftsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (leftsum == sum - a[i])
        {
            return i + 1;
        }
        leftsum += a[i];
        sum -= a[i];
    }
    return -1;
}