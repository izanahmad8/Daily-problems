vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
{
    int n = arr.size();
    vector<int> XOR(n, 0);
    XOR[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        XOR[i] = XOR[i - 1] ^ arr[i];
    }
    vector<int> res;
    for (vector<int> &q : queries)
    {
        int l = q[0];
        int r = q[1];
        int val = XOR[r] ^ (l == 0 ? 0 : XOR[l - 1]);
        res.push_back(val);
    }
    return res;
}