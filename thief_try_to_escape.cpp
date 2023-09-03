int totalJumps(int X, int Y, int N, int arr[])
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        while (arr[i] > X)
        {
            count++;
            arr[i] = arr[i] - (X - Y);
        }
        count++;
    }
    return count;
}