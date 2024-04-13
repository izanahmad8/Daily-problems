vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    inOrder(root, ans);
    return ans;
}
void inOrder(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;
    inOrder(root->left, ans);
    ans.push_back(root->val);
    inOrder(root->right, ans);
}