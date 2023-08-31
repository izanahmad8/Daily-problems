int mthHalf(int N, int M)
{
    int res = N;
    while (M > 1)
    {
        res = N / 2;
        N /= 2;
        M--;
    }
    return res;
}