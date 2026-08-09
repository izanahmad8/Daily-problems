bool dfs(unordered_map<int, vector<int>> &adj, int u, vector<bool> &vis, int parent)
{
    vis[u] = true;
    for (int &v : adj[u])
    {
        if (v == parent)
            continue;
        if (vis[v])
            return true;
        if (dfs(adj, v, vis, u))
            return true;
    }
    return false;
}
bool isCycle(int V, vector<vector<int>> &edges)
{
    vector<bool> vis(V, false);
    unordered_map<int, vector<int>> adj;
    for (auto &edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < V; i++)
    {
        if (!vis[i] && dfs(adj, i, vis, -1))
        {
            return true;
        }
    }
    return false;
}