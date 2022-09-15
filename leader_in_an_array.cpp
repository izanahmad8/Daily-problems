vector<int> leaders(int a[], int n)
{
    vector<int> res;
    int curr_ldr = a[n - 1];
    res.push_back(a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        curr_ldr = max(curr_ldr, a[i + 1]);
        if (curr_ldr <= a[i])
        {
            curr_ldr = a[i];
            res.push_back(curr_ldr);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}