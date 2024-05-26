void solve(Node *root, vector<int> &ans, int low, int high)
{
    if (!root)
        return;
    solve(root->left, ans, low, high);
    if (root->data >= low && root->data <= high)
    {
        ans.push_back(root->data);
    }
    solve(root->right, ans, low, high);
}
vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int> ans;
    solve(root, ans, low, high);
    return ans;
}