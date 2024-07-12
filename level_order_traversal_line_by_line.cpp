vector<vector<int>> levelOrder(Node *node)
{
    vector<vector<int>> res;
    if (!node)
        return res;
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        vector<int> temp;
        int n = q.size();
        while (n--)
        {
            Node *root = q.front();
            q.pop();
            temp.push_back(root->data);
            if (root->left)
            {
                q.push(root->left);
            }
            if (root->right)
            {
                q.push(root->right);
            }
        }
        res.push_back(temp);
    }
    return res;
}