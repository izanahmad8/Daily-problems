int getMinDiff(int k, vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int min_diff = arr[n - 1] - arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        int mini = min(arr[0] + k, arr[i + 1] - k);
        int maxi = max(arr[n - 1] - k, arr[i] + k);
        min_diff = min(min_diff, maxi - mini);
    }
    return min_diff;
}