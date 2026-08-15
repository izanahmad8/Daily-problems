// Topological Sort using DFS
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

// Kahn's Algorithm - Topological Sort using BFS
vector<int> topoSort(int V, vector<vector<int>> &edges)
{
    vector<int> res;
    vector<int> indegree(V, 0);
    queue<int> q;
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
        res.push_back(u);
        q.pop();
        for (int &v : adj[u])
        {
            indegree[v]--;
            if (indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }
    return res;
}