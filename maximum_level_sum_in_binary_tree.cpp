int maxLevelSum(Node *root)
{
    if (!root)
        return 0;
    int maxSum = INT_MIN;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        int sum = 0;
        while (n--)
        {
            Node *node = q.front();
            q.pop();
            sum += node->data;
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}