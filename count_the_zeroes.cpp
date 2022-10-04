int countZeroes(int arr[], int n)
{
    int l = 0, h = n - 1;
    if (arr[0] == 0)
    {
        return n;
    }
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (arr[m] == 1)
        {
            l = m + 1;
        }
        else
        {
            if (m == 1 || arr[m - 1] == 1)
            {
                return n - m;
            }
            else
            {
                h = m - 1;
            }
        }
    }
    return 0;
}