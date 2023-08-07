int Maximize(int a[], int n)
{
    sort(a, a + n);
    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        sum = sum + (a[i] * i);
    }
    return (sum % 1000000007);
}