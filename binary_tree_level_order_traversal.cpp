vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> res;
    if (!root)
        return res;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        vector<int> temp(n);
        for (int i = 0; i < n; i++)
        {
            TreeNode *curr = q.front();
            q.pop();
            temp.push_back(curr->val);
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
        res.push_back(temp);
    }
    return res;
}