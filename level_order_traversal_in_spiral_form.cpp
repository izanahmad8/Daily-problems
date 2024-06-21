vector<int> findSpiral(Node *root)
{
    if (!root)
        return {};
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    bool flag = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> v;
        for (int i = 0; i < size; i++)
        {
            Node *temp = q.front();
            q.pop();
            v.push_back(temp->data);
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        if (flag)
        {
            reverse(v.begin(), v.end());
            for (auto i : v)
            {
                ans.push_back(i);
            }
        }
        else
        {
            for (auto i : v)
            {
                ans.push_back(i);
            }
        }
        flag = !flag;
    }
    return ans;
}