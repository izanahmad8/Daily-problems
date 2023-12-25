vector<int> leaders(int a[], int n)
{
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] >= maxi)
        {
            maxi = a[i];
            ans.push_back(a[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}