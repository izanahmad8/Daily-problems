pair<long long, long long> getMinMax(long long a[], int n)
{
    pair<long long, long long> p;
    long max = a[0];
    long min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    p.first = min;
    p.second = max;
    return {min, max};