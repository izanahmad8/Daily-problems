int findSum(int A[], int N)
{
    int min = A[0], max = A[0];
    for (int i = 1; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min + max;
}