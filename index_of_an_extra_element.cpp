int findExtra(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            return i;
        }
    }
    return -1;
}
int findExtra(int n, int arr1[], int arr2[])
{
    int l = 0;
    int r = n - 2;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr1[mid] == arr2[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return l;
}