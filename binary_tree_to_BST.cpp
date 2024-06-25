int i = 0;
vector<int> v;
void inOrder(Node *root)
{
    if (!root)
        return;
    inOrder(root->left);
    v.push_back(root->data);
    inOrder(root->right);
}
void fill(Node *root)
{
    if (!root)
        return;
    fill(root->left);
    root->data = v[i++];
    fill(root->right);
}
Node *binaryTreeToBST(Node *root)
{
    inOrder(root);
    sort(v.begin(), v.end());
    fill(root);
    return root;
}