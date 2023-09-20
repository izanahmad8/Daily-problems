int FindMaxSum(int arr[], int n)
{
    pair<int, int> ans;
    ans.first = 0;
    ans.second = 0;
    for (int i = 0; i < n; i++)
    {
        int second = max(ans.first, ans.second);
        ans.first = arr[i] + ans.second;
        ans.second = second;
    }
    return max(ans.first, ans.second);
}