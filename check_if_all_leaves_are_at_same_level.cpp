bool check(Node *root)
{
    if (!root)
        return true;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    int l = -1;
    while (!q.empty())
    {
        Node *node = q.front().first;
        int level = q.front().second;
        q.pop();
        if (!node->left && !node->right)
        {
            if (l == -1)
            {
                l = level;
            }
            else if (l != level)
            {
                return false;
            }
        }
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
    return true;
}