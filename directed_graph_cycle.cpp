bool dfs(unordered_map<int, vector<int>> &adj, int u, vector<bool> &vis, vector<bool> &inRecursion)
{
    vis[u] = true;
    inRecursion[u] = true;
    for (int &v : adj[u])
    {
        if (!vis[v] && dfs(adj, v, vis, inRecursion))
        {
            return true;
        }
        else if (inRecursion[v])
        {
            return true;
        }
    }
    inRecursion[u] = false;
    return false;
}
bool isCyclic(int V, vector<vector<int>> &edges)
{
    vector<bool> vis(V, false);
    vector<bool> inRecursion(V, false);
    unordered_map<int, vector<int>> adj;
    for (auto &edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
    }
    for (int i = 0; i < V; i++)
    {
        if (!vis[i] && dfs(adj, i, vis, inRecursion))
        {
            return true;
        }
    }
    return false;
}