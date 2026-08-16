vector<vector<int>> printGraph(int V, vector<pair<int, int>> &edges)
{
    vector<vector<int>> res(V);
    for (auto &edge : edges)
    {
        int u = edge.first;
        int v = edge.second;
        res[u].push_back(v);
        res[v].push_back(u);
    }
    return res;
}