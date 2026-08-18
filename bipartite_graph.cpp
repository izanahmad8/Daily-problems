bool bfs(unordered_map<int, vector<int>> &adj, int u, vector<int> &color, int currColor)
{
    queue<int> q;
    q.push(u);
    color[u] = currColor;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int &v : adj[u])
        {
            if (color[v] == -1)
            {
                color[v] = !color[u];
                q.push(v);
            }
            else if (color[v] == color[u])
            {
                return false;
            }
        }
    }
    return true;
}
bool isBipartite(int V, vector<vector<int>> &edges)
{
    vector<int> color(V, -1);
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
        if (color[i] == -1)
        {
            if (!bfs(adj, i, color, 1))
            {
                return false;
            }
        }
    }
    return true;
}