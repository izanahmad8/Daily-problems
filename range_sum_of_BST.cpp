void solve(TreeNode *root, int low, int high, int &sum)
{
    if (!root)
        return;
    solve(root->left, low, high, sum);
    if (root->val >= low && root->val <= high)
    {
        sum += root->val;
    }
    solve(root->right, low, high, sum);
}
int rangeSumBST(TreeNode *root, int low, int high)
{
    int sum = 0;
    solve(root, low, high, sum);
    return sum;
}