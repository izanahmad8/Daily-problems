void rearrange(long long *arr, int n)
{
    int l = 0, r = n - 1;
    int max = arr[n - 1] + 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += (arr[r] % max) * max;
            r--;
        }
        else
        {
            arr[i] += (arr[l] % max) * max;
            l++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] /= max;
    }
}