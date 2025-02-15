bool solve(Node *root, unordered_set<int> &st, int target)
{
    if (!root)
        return false;
    if (st.find(target - root->data) != st.end())
    {
        return true;
    }
    st.insert(root->data);
    return solve(root->left, st, target) || solve(root->right, st, target);
}
bool findTarget(Node *root, int target)
{
    unordered_set<int> st;
    return solve(root, st, target);
}