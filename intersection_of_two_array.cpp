int NumberofElementsInIntersection(int a[], int b[], int n, int m)
{
    unordered_map<int, bool> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]] = true;
    }
    for (int i = 0; i < m; i++)
    {
        if (mp[b[i]])
        {
            count++;
            mp[b[i]] = false;
        }
    }
    return count;
}