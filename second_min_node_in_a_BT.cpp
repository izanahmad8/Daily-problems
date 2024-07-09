void solve(TreeNode *root, set<int> &st)
{
    if (!root)
        return;
    st.insert(root->val);
    solve(root->left, st);
    solve(root->right, st);
}
int findSecondMinimumValue(TreeNode *root)
{
    set<int> st;
    solve(root, st);
    auto it = st.begin();
    it++;
    return st.size() == 1 ? -1 : *it;
}