vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
{
    vector<int> indegree(numCourses, 0);
    unordered_map<int, vector<int>> adj;
    vector<int> res;
    queue<int> q;
    for (auto &pre : prerequisites)
    {
        int u = pre[1];
        int v = pre[0];
        adj[u].push_back(v);
    }
    for (int u = 0; u < numCourses; u++)
    {
        for (int &v : adj[u])
        {
            indegree[v]++;
        }
    }
    for (int i = 0; i < numCourses; i++)
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
        res.push_back(u);
        for (int &v : adj[u])
        {
            indegree[v]--;
            if (indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }
    return res.size() == numCourses ? res : vector<int>();
}