int missingNumber(int A[], int N)
{
    int Tsum = N * (N + 1) / 2, Gsum = 0, res = 0;
    for (int i = 0; i < N - 1; i++)
    {
        Gsum += A[i];
    }
    res = Tsum - Gsum;
    return res;
}