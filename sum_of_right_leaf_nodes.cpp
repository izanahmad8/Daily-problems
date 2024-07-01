int rightLeafSum(Node *root)
{
    int sum = 0;
    queue<pair<Node *, bool>> q;
    q.push({root, false});
    while (!q.empty())
    {
        Node *node = q.front().first;
        bool chk = q.front().second;
        q.pop();
        if (!node->left && !node->right && chk)
        {
            sum += node->data;
        }
        if (node->left)
        {
            q.push({node->left, false});
        }
        if (node->right)
        {
            q.push({node->right, true});
        }
    }
    return sum;
}