int kthElement(vector<int> &a, vector<int> &b, int k)
{
    int i = 0, j = 0;
    int ans = -1;
    int n = a.size();
    int m = b.size();
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            ans = a[i++];
        }
        else
        {
            ans = b[j++];
        }
        k--;
        if (k == 0)
            return ans;
    }
    while (i < n)
    {
        ans = a[i++];
        k--;
        if (k == 0)
            return ans;
    }
    while (j < m)
    {
        ans = b[j++];
        k--;
        if (k == 0)
            return ans;
    }
    return ans;
}