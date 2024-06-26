void InOrder(TreeNode *root, vector<int> &v)
{
    if (!root)
        return;
    InOrder(root->left, v);
    v.push_back(root->val);
    InOrder(root->right, v);
}
TreeNode *solve(int l, int r, vector<int> &v)
{
    if (l > r)
        return NULL;
    int m = (l + r) / 2;
    TreeNode *root = new TreeNode(v[m]);
    root->left = solve(l, m - 1, v);
    root->right = solve(m + 1, r, v);
    return root;
}
TreeNode *balanceBST(TreeNode *root)
{
    vector<int> v;
    InOrder(root, v);
    int l = 0;
    int r = v.size() - 1;
    return solve(l, r, v);
}