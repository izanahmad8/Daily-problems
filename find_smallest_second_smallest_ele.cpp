vector<int> minAnd2ndMin(int a[], int n)
{
    vector<int> ans;
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            ans.push_back(a[i]);
            ans.push_back(a[i + 1]);
            return ans;
        }
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}