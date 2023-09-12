int waitingTime(int N, int X)
{
    int a = (N - 1) * 10;
    int b = (N - 1) * X;
    if (a - b < 0)
    {
        return 0;
    }
    return a - b;
}