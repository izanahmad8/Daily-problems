vector<int> duplicates(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    vector<int> v;
    for (auto i : m)
    {
        if (i.second > 1)
        {
            v.push_back(i.first);
        }
    }
    if (v.empty())
    {
        return {-1};
    }
    return v;
}