vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> ans, vis(V, 0);
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        ans.push_back(curr);
        for (auto node : adj[curr])
        {
            if (!vis[node])
            {
                vis[node] = 1;
                q.push(node);
            }
        }
    }
    return ans;
}