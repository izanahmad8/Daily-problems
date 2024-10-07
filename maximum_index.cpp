int maxIndexDiff(int arr[], int n)
{
    int left[n], right[n];
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        left[i] = min(left[i - 1], arr[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }
    int i = 0;
    int j = 0;
    int max_idx = 0;
    while (i < n && j < n)
    {
        if (left[i] <= right[j])
        {
            max_idx = max(max_idx, j - i);
            j++;
        }
        else
        {
            i++;
        }
    }
    return max_idx;
}