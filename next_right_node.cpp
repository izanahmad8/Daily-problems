Node *nextRight(Node *root, int key)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            Node *node = q.front();
            q.pop();
            if (node->data == key && n != 0)
            {
                return q.front();
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
    }
    Node *node = new Node(-1);
    return node;
}