long long trappingWater(int arr[], int n)
{
    long long res = 0;
    int left[n], right[n];
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(arr[i], left[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(arr[i], right[i + 1]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        res += min(left[i], right[i]) - arr[i];
    }
    return res;
}