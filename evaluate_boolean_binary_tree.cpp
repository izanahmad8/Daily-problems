bool evaluateTree(TreeNode *root)
{
    if (!root->left && !root->right)
    {
        return root->val;
    }
    int a = evaluateTree(root->left);
    int b = evaluateTree(root->right);
    if (root->val == 2)
    {
        return a | b;
    }
    return a && b;
}