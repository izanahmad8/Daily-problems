int getLevelDiff(Node *root)
{
    int sumEven = 0;
    int sumOdd = 0;
    queue<pair<Node *, int>> q;
    q.push({root, 1});
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            Node *node = q.front().first;
            int level = q.front().second;
            q.pop();
            if (level % 2 == 0)
            {
                sumEven += node->data;
            }
            else
            {
                sumOdd += node->data;
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
    }
    return sumOdd - sumEven;
}