long long prev = LONG_MIN;
void solve(TreeNode *root, bool &chk)
{
    if (!root)
        return;
    solve(root->left, chk);
    if (root->val <= prev)
    {
        chk = false;
    }
    prev = root->val;
    solve(root->right, chk);
}
bool isValidBST(TreeNode *root)
{
    bool chk = true;
    solve(root, chk);
    return chk;
}