int kthMissing(vector<int> &arr, int k)
{
    int l = 0;
    int r = arr.size() - 1;
    int res = arr.size() + k;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] > m + k)
        {
            res = m + k;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return res;
}