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

// Kahn's Algorithm - Cycle Detection using BFS
bool isCyclic(int V, vector<vector<int>> &edges)
{
    vector<int> indegree(V, 0);
    queue<int> q;
    int count = 0;
    unordered_map<int, vector<int>> adj;
    for (auto &edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
    }
    for (int u = 0; u < V; u++)
    {
        for (int &v : adj[u])
        {
            indegree[v]++;
        }
    }
    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        count++;
        for (int &v : adj[u])
        {
            indegree[v]--;
            if (indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }
    return count != V;
}