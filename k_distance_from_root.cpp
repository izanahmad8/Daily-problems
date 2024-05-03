void solve(Node *root, vector<int> &ans, int k)
{
    if (!root || k < 0)
        return;
    if (k == 0)
    {
        ans.push_back(root->data);
    }
    solve(root->left, ans, k - 1);
    solve(root->right, ans, k - 1);
}
vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> ans;
    solve(root, ans, k);
    return ans;
}