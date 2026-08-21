vector<int> parent;
vector<int> rank;
int find(int i)
{
    if (parent[i] == i)
        return i;
    return parent[i] = find(parent[i]);
}
void Union(int u, int v)
{
    u = find(u);
    v = find(v);
    if (u == v)
        return;
    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[u] > rank[v])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}
bool detectCycle(int V, vector<int> adj[])
{
    parent.resize(V);
    rank.assign(V, 0);
    for (int i = 0; i < V; i++)
    {
        parent[i] = i;
    }
    for (int u = 0; u < V; u++)
    {
        for (int &v : adj[u])
        {
            if (u < v)
            {
                int parent_u = find(u);
                int parent_v = find(v);
                if (parent_u == parent_v)
                    return true;
                Union(u, v);
            }
        }
    }
    return false;
}