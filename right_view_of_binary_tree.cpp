void solve(Node *root, vector<int> &res, int level)
{
    if (!root)
        return;
    if (res.size() == level)
        res.push_back(root->data);
    solve(root->right, res, level + 1);
    solve(root->left, res, level + 1);
}
vector<int> rightView(Node *root)
{
    vector<int> res;
    solve(root, res, 0);
    return res;
}