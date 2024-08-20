Node *mapping(Node *root, int target, unordered_map<Node *, Node *> &mp)
{
    Node *res = NULL;
    queue<Node *> q;
    q.push(root);
    mp[root] = NULL;
    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();
        if (tmp->data == target)
        {
            res = tmp;
        }
        if (tmp->left)
        {
            mp[tmp->left] = tmp;
            q.push(tmp->left);
        }
        if (tmp->right)
        {
            mp[tmp->right] = tmp;
            q.push(tmp->right);
        }
    }
    return res;
}

void burnTree(Node *targetNode, unordered_map<Node *, Node *> mp, int &Time)
{
    unordered_map<Node *, bool> vis;
    queue<Node *> q;
    q.push(targetNode);
    vis[targetNode] = true;
    while (!q.empty())
    {
        int size = q.size();
        bool flag = false;
        while (size--)
        {
            Node *tmp = q.front();
            q.pop();
            if (tmp->left && !vis[tmp->left])
            {
                flag = true;
                q.push(tmp->left);
                vis[tmp->left] = true;
            }
            if (tmp->right && !vis[tmp->right])
            {
                flag = true;
                q.push(tmp->right);
                vis[tmp->right] = true;
            }
            if (mp[tmp] && !vis[mp[tmp]])
            {
                flag = true;
                q.push(mp[tmp]);
                vis[mp[tmp]] = true;
            }
        }
        if (flag)
        {
            Time++;
        }
    }
}

int minTime(Node *root, int target)
{
    int Time = 0;
    unordered_map<Node *, Node *> parentMap;
    Node *targetNode = mapping(root, target, parentMap);
    burnTree(targetNode, parentMap, Time);
    return Time;
}