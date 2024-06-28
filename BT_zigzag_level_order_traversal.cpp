vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    if (!root)
        return {};
    vector<vector<int>> ans;
    queue<TreeNode *> q;
    q.push(root);
    bool dir = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> temp;
        while (size--)
        {
            TreeNode *node = q.front();
            q.pop();
            temp.push_back(node->val);
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        if (!dir)
        {
            reverse(temp.begin(), temp.end());
        }
        ans.push_back(temp);
        dir = !dir;
    }
    return ans;
}