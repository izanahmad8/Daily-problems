vector<int> topView(Node *root)
{
    vector<int> ans;
    map<int, int> mp;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        Node *temp = it.first;
        int hl = it.second;
        if (mp.find(hl) == mp.end())
        {
            mp[hl] = temp->data;
        }
        if (temp->left)
        {
            q.push({temp->left, hl - 1});
        }
        if (temp->right)
        {
            q.push({temp->right, hl + 1});
        }
    }
    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}