long long int minValue(int a[], int b[], int n)
{
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    long long minProduct = 0;
    for (int i = 0; i < n; i++)
    {
        minProduct += a[i] * b[i];
    }
    return minProduct;
}