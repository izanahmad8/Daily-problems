int findPair(int n, int x, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int l = 0, r = 1;
    while (l < n && r < n)
    {
        if (arr[r] - arr[l] == x && l != r)
        {
            return 1;
        }
        else if (arr[r] - arr[l] > x)
        {
            l++;
        }
        else
        {
            r++;
        }
    }
    return -1;
}