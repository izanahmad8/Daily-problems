int pivotInteger(int n)
{
    int sum = (n * (n + 1)) / 2;
    int l = 1, r = n;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        int fSum = (m * (m + 1)) / 2;
        int lSum = sum - fSum + m;
        if (fSum == lSum)
        {
            return m;
        }
        else if (fSum < lSum)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return -1;
}