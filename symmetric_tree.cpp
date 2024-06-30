bool isSymmetric(TreeNode *root)
{
    if (!root)
        return true;
    queue<TreeNode *> q;
    q.push(root->left);
    q.push(root->right);
    while (!q.empty())
    {
        int n = q.size();
        vector<int> temp;
        while (n--)
        {
            TreeNode *node = q.front();
            q.pop();
            if (node)
            {
                temp.push_back(node->val);
                q.push(node->left);
                q.push(node->right);
            }
            else
            {
                temp.push_back(INT_MIN);
            }
        }
        int i = 0;
        int j = temp.size() - 1;
        while (i < j)
        {
            if (temp[i] != temp[j])
            {
                return false;
            }
            i++;
            j--;
        }
    }
    return true;
}