int transitionPoint(int arr[], int n)
{
    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (arr[m] == 1 && arr[m - 1] == 0)
        {
            return m;
        }
        else if (arr[m] < 1)
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
    return -1;
}