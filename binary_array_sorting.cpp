void binSort(int A[], int N)
{
    int i = 0, j = N - 1;
    while (i < j)
    {
        if (A[i] == 1)
        {
            swap(A[i], A[j]);
            j--;
        }
        else
        {
            i++;
        }
    }
}