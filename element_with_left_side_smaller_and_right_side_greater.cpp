int findElement(vector<int> &arr)
{
    int n = arr.size();
    vector<int> left(n);
    vector<int> right(n);
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(arr[i], left[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = min(right[i + 1], arr[i]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (left[i] == right[i])
        {
            return left[i];
        }
    }
    return -1;
}