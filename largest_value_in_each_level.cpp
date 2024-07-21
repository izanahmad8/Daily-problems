vector<int> largestValues(Node *root)
{
    if (!root)
        return {};
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        int maxi = INT_MIN;
        while (n--)
        {
            Node *node = q.front();
            q.pop();
            maxi = max(node->data, maxi);
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        ans.push_back(maxi);
    }
    return ans;
}