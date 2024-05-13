void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &nodes)
{
    nodes.push_back(node);
    vis[node] = 1;

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj, nodes);
        }
    }
}

int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges)
{
    int ans = 0;
    vector<int> vis(v + 1, 0);
    vector<int> adj[v + 1];

    for (auto it : edges)
    {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }

    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            vector<int> nodes;
            dfs(i, vis, adj, nodes);

            bool flag = 1;
            for (int j = 0; j < nodes.size(); j++)
            {
                if (adj[nodes[j]].size() < nodes.size() - 1)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                ans++;
            }
        }
    }

    return ans;
}