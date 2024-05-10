vector<vector<int>> ans;
void solve(vector<int> &arr, int k, int ind, vector<int> &temp)
{
    if (k == 0)
    {
        ans.push_back(temp);
        return;
    }
    for (int i = ind; i < arr.size(); i++)
    {
        if (arr[i] > k)
            break;
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        temp.push_back(arr[i]);
        solve(arr, k - arr[i], i + 1, temp);
        temp.pop_back();
    }
}
vector<vector<int>> CombinationSum2(vector<int> arr, int n, int k)
{
    vector<int> temp;
    sort(arr.begin(), arr.end());
    solve(arr, k, 0, temp);
    return ans;
}