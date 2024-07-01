TreeNode *solve(vector<int> &v, int i)
{
    if (i >= v.size())
        return NULL;
    TreeNode *node = new TreeNode(v[i]);
    node->left = solve(v, 2 * i + 1);
    node->right = solve(v, 2 * i + 2);
    return node;
}
void convert(Node *head, TreeNode *&root)
{
    vector<int> v;
    while (head)
    {
        v.push_back(head->data);
        head = head->next;
    }
    root = solve(v, 0);
}