void dfs(int u, vector<int> &vis, vector<vector<int>> &adj, vector<int> &ans)
{
    if (vis[u])
        return;
    vis[u] = 1;
    ans.push_back(u);
    for (int &v : adj[u])
    {
        if (!vis[v])
        {
            dfs(v, vis, adj, ans);
        }
    }
}
vector<int> dfsOfGraph(vector<vector<int>> &adj)
{
    int v = adj.size();
    vector<int> ans;
    vector<int> vis(v, 0);
    dfs(0, vis, adj, ans);
    return ans;
}