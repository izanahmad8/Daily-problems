int minLeafSum(Node *root)
{
    if (!root)
        return 0;
    int sum = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            Node *node = q.front();
            q.pop();
            if (!node->left && !node->right)
            {
                sum += node->data;
            }
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        if (sum > 0)
        {
            return sum;
        }
    }
    return 0;
}