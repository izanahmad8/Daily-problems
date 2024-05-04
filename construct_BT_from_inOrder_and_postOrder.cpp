Node *solve(int in[], int post[], int inStart, int inEnd, int posStart, int posEnd)
{
    if (posEnd < 0 || inStart > inEnd)
        return NULL;
    Node *root = new Node(post[posEnd]);
    int i = inStart;
    for (; i <= inEnd; i++)
    {
        if (root->data == in[i])
        {
            break;
        }
    }
    int left = i - inStart;
    int right = inEnd - i;
    root->left = solve(in, post, inStart, i - 1, posStart, posStart + left - 1);
    root->right = solve(in, post, i + 1, inEnd, posEnd - right, posEnd - 1);
    return root;
}
Node *buildTree(int in[], int post[], int n)
{
    return solve(in, post, 0, n - 1, 0, n - 1);
}

// leetcode
TreeNode *solve(vector<int> &inorder, vector<int> &postorder, int inStart, int inEnd, int posStart, int posEnd)
{
    if (inStart > inEnd || posEnd < 0)
        return NULL;
    TreeNode *root = new TreeNode(postorder[posEnd]);
    int i = inStart;
    for (; i <= inEnd; i++)
    {
        if (root->val == inorder[i])
            break;
    }
    int left = i - inStart;
    int right = inEnd - i;
    root->left = solve(inorder, postorder, inStart, i - 1, posStart, posStart + left - 1);
    root->right = solve(inorder, postorder, i + 1, inEnd, posEnd - right, posEnd - 1);
    return root;
}
TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    return solve(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1);
}