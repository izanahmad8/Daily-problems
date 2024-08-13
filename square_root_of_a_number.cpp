long long int floorSqrt(long long int n)
{
    long long int l = 1;
    long long int h = n;
    long long int flor;
    while (l <= h)
    {
        long long int m = (l + h) / 2;
        if (m * m == n)
        {
            return m;
        }
        else if (m * m < n)
        {
            l = m + 1;
            flor = m;
        }
        else
        {
            h = m - 1;
        }
    }
    return flor;
}