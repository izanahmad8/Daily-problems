int heapHeight(int N, int arr[])
{
    if (N == 1)
        return 1;
    int count = 0;
    while (N > 1)
    {
        count++;
        N = N / 2;
    }
    return count;
}