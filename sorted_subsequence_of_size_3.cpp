vector<int> find3Numbers(vector<int> &arr)
{
    int n = arr.size();
    vector<int> small(n);
    vector<int> big(n);
    small[0] = arr[0];
    big[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        small[i] = min(arr[i], small[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        big[i] = max(arr[i], big[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        if (small[i] < arr[i] && big[i] > arr[i])
        {
            return {small[i], arr[i], big[i]};
        }
    }
    return {};
}