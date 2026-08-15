void dfs(unordered_map<int, vector<int>> &adj, int u, vector<bool> &vis, stack<int> &st)
{
    vis[u] = true;
    for (int &v : adj[u])
    {
        if (!vis[v])
            dfs(adj, v, vis, st);
    }
    st.push(u);
}
vector<int> topoSort(int V, vector<vector<int>> &edges)
{
    vector<bool> vis(V, false);
    stack<int> st;
    unordered_map<int, vector<int>> adj;
    for (auto &edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
    }
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
            dfs(adj, i, vis, st);
    }
    vector<int> res;
    while (!st.empty())
    {
        res.push_back(st.top());
        st.pop();
    }
    return res;
}