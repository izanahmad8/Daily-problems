void solve(vector<int> &arr, int i, int sum, int n, vector<int> &ans)
{
    if (i >= n)
    {
        ans.push_back(sum);
        return;
    }
    solve(arr, i + 1, sum + arr[i], n, ans);
    solve(arr, i + 1, sum, n, ans);
}
vector<int> subsetSums(vector<int> arr, int n)
{
    vector<int> ans;
    solve(arr, 0, 0, n, ans);
    return ans;
}