int minDist(int a[], int n, int x, int y)
{
    int prev = -1, next = -1, min = 100000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            prev = i;
        }
        else if (a[i] == y)
        {
            next = i;
        }
        if (prev != -1 && next != -1)
        {
            if ((abs(prev - next)) < min)
            {
                min = abs(prev - next);
            }
        }
    }
    if (min == 100000)
    {
        return -1;
    }
    return min;
}