int thirdLargest(int a[], int n)
{
    if (n <= 2)
    {
        return -1;
    }
    sort(a, a + n);
    return a[n - 3];
}
