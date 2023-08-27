int findUnique(int a[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    for (auto i : m)
    {
        if (i.second % k != 0)
        {
            return i.first;
        }
    }
    return -1;
}