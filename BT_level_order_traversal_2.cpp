vector<vector<int>> levelOrderBottom(TreeNode *root)
{
    vector<vector<int>> res;
    if (!root)
        return {};
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        vector<int> tmp;
        while (n--)
        {
            TreeNode *node = q.front();
            q.pop();
            tmp.push_back(node->val);
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        res.push_back(tmp);
    }
    reverse(begin(res), end(res));
    return res;
}