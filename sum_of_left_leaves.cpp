int sumOfLeftLeaves(TreeNode *root)
{
    int sum = 0;
    queue<pair<TreeNode *, bool>> q;
    q.push({root, false});
    while (!q.empty())
    {
        TreeNode *node = q.front().first;
        bool chk = q.front().second;
        q.pop();
        if (!node->left && !node->right && chk)
        {
            sum += node->val;
        }
        if (node->left)
        {
            q.push({node->left, true});
        }
        if (node->right)
        {
            q.push({node->right, false});
        }
    }
    return sum;
}