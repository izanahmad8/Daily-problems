long long find_multiplication(int a[], int b[], int n, int m)
{
    long long max = a[0], min = b[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (b[i] < min)
        {
            min = b[i];
        }
    }
    return max * min;
}