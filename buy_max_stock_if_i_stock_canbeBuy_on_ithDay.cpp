int buyMaximumProducts(int n, int k, int price[])
{
    int count = 0;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        p.push_back(make_pair(price[i], i + 1));
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++)
    {
        if (p[i].first <= k)
        {
            int j = p[i].second;
            while (j-- && p[i].first <= k)
            {
                count++;
                k = k - p[i].first;
            }
        }
    }
    return count;
}