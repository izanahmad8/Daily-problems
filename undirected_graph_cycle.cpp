bool dfs(int u, vector<vector<int>> &adj, vector<int> &vis, int parent)
{
    vis[u] = 1;
    for (int &v : adj[u])
    {
        if (v == parent)
        {
            continue;
        }
        if (vis[v])
        {
            return true;
        }
        if (dfs(v, adj, vis, u))
        {
            return true;
        }
    }
    return false;
}
bool isCycle(vector<vector<int>> adj)
{
    int v = adj.size();
    vector<int> vis(v, 0);
    for (int u = 0; u < v; u++)
    {
        if (!vis[u] && dfs(u, adj, vis, -1))
        {
            return true;
        }
    }
    return false;
}