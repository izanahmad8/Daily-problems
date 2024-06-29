int getCount(Node *root, int k)
{
    int count = 0;
    queue<pair<Node *, int>> q;
    q.push({root, 1});
    while (!q.empty())
    {
        Node *temp = q.front().first;
        int level = q.front().second;
        q.pop();
        if (!temp->left && !temp->right && level <= k)
        {
            k -= level;
            count++;
        }
        if (temp->left)
        {
            q.push({temp->left, level + 1});
        }
        if (temp->right)
        {
            q.push({temp->right, level + 1});
        }
    }
    return count;
}