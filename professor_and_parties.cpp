string PartyType(long long int a[], int n)
{
    string b = "BOYS";
    string g = "GIRLS";
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    for (auto i : m)
    {
        if (i.second > 1)
        {
            return b;
        }
    }
    return g;
}