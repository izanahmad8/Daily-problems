int findPages(int A[], int N, int M)
{
    if (M > N)
    {
        return -1;
    }
    int min = *max_element(A, A + N);
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        max += A[i];
    }
    while (min <= max)
    {
        int mid = min + (max - min) / 2;
        int student = isfeasible(A, M, mid, N);
        if (student > M)
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    return min;
}
int isfeasible(int A[], int M, int mid, int N)
{
    int student = 1, sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (sum + A[i] > mid)
        {
            student++;
            sum = A[i];
        }
        else
        {
            sum += A[i];
        }
    }
    return student;
}