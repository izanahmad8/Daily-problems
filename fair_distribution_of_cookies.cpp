int res = INT_MAX;
void solve(int ind, vector<int> &child, vector<int> &cookies, int k)
{
    if (ind >= cookies.size())
    {
        int maxi = *max_element(child.begin(), child.end());
        res = min(res, maxi);
        return;
    }
    for (int i = 0; i < k; i++)
    {
        child[i] += cookies[ind];
        solve(ind + 1, child, cookies, k);
        child[i] -= cookies[ind];
    }
}
int distributeCookies(vector<int> &cookies, int k)
{
    vector<int> child(k, 0);
    solve(0, child, cookies, k);
    return res;
}