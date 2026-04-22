vector<int> findMean(vector<int> &arr, vector<vector<int>> &queries)
{
    int n = arr.size();
    vector<int> res;
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for (auto &q : queries)
    {
        int l = q[0];
        int r = q[1];
        int sum = prefix[r] - (l > 0 ? prefix[l - 1] : 0);
        int avg = sum / (r - l + 1);
        res.push_back(avg);
    }
    return res;
}