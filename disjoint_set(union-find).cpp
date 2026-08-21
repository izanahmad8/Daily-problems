vector<int> parent;
int find(int i)
{
    if (parent[i] == i)
        return i;
    return parent[i] = find(parent[i]);
}
vector<int> DSU(int n, vector<vector<int>> &queries)
{
    vector<int> res;
    parent.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
    for (auto &query : queries)
    {
        if (query[0] == 1)
        {
            int x = query[1];
            int y = query[2];
            int u = find(x);
            int v = find(y);
            parent[u] = v;
        }
        else
        {
            int x = query[1];
            res.push_back(find(x));
        }
    }
    return res;
}