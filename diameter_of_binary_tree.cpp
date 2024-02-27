int diameterOfBinaryTree(TreeNode *root)
{
    int res = 0;
    diameter(root, res);
    return res;
}
int diameter(TreeNode *root, int &res)
{
    if (!root)
    {
        return 0;
    }
    int left = diameter(root->left, res);
    int right = diameter(root->right, res);
    res = max(left + right, res);
    return max(left, right) + 1;
}