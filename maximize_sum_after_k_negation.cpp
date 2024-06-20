long long int maximizeSum(long long int a[], int n, int k)
{
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && k > 0)
        {
            a[i] = -a[i];
            k--;
        }
    }
    long long int sum = accumulate(a, a + n, 0);
    int x = *min_element(a, a + n);
    if (k % 2 != 0)
    {
        sum -= 2 * x;
    }
    return sum;
}