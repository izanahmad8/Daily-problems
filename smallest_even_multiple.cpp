int smallestEvenMultiple(int n)
{
    if (n == 1)
    {
        return 2;
    }
    int i = n;
    while (i < n * n)
    {
        if (i % 2 == 0 && i % n == 0)
        {
            return i;
        }
        i++;
    }
    return -1;
}