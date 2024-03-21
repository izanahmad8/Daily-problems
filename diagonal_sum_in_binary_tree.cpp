vector<int> diagonalSum(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int sum = 0;
        int size = q.size();
        while (size--)
        {
            Node *curr = q.front();
            q.pop();
            while (curr != NULL)
            {
                if (curr->left)
                {
                    q.push(curr->left);
                }
                sum += curr->data;
                curr = curr->right;
            }
        }
        ans.push_back(sum);
    }
    return ans;
}