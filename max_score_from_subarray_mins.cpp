int maxSum(vector<int> &arr)
{
    int n = arr.size();
    int res = arr[0] + arr[1];
    for (int i = 1; i < n - 1; i++)
    {
        res = max(res, arr[i] + arr[i + 1]);
    }
    return res;
}