int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    int small = arr[0] + k;
    int large = arr[n - 1] - k;
    int mini, maxi;
    for (int i = 0; i < n; i++)
    {
        mini = min(small, arr[i + 1] - k);
        maxi = max(large, arr[i] + k);
        if (mini < 0)
        {
            continue;
        }
        ans = min(ans, maxi - mini);
    }
    return ans;
}