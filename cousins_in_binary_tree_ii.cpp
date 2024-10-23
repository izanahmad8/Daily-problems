TreeNode *replaceValueInTree(TreeNode *root)
{
    if (!root)
        return NULL;
    vector<int> levelSum;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int sum = 0;
        int n = q.size();
        while (n--)
        {
            TreeNode *node = q.front();
            q.pop();
            sum += node->val;
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        levelSum.push_back(sum);
    }
    q.push(root);
    root->val = 0;
    int i = 1;
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            TreeNode *node = q.front();
            q.pop();
            int sibSum = node->left ? node->left->val : 0;
            sibSum += node->right ? node->right->val : 0;
            if (node->left)
            {
                node->left->val = levelSum[i] - sibSum;
                q.push(node->left);
            }
            if (node->right)
            {
                node->right->val = levelSum[i] - sibSum;
                q.push(node->right);
            }
        }
        i++;
    }
    return root;
}