int getMaxWidth(Node *root)
{
    if (!root)
        return 0;
    int maxWidth = -1;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        maxWidth = max(maxWidth, size);
        while (size--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return maxWidth;
}