vector<int> zigZagTraversal(Node *root)
{
    vector<int> res;
    queue<Node *> q;
    bool dir = true;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        int size = res.size();
        vector<int> temp;
        while (n--)
        {
            Node *curr = q.front();
            q.pop();
            res.push_back(curr->data);
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
        if (!dir)
        {
            reverse(res.begin() + size, res.end());
        }
        dir = !dir;
    }
    return res;
}