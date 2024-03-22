vector<int> Series(int n)
{
    vector<int> ans{0, 1};
    const int mod = 1e9 + 7;
    for (int i = 2; i <= n; i++)
    {
        int next = (ans[i - 1] + ans[i - 2]) % mod;
        ans.push_back(next);
    }
    return ans;
}