int solve(Node *root, int &dia)
{
    if (!root)
        return 0;
    int left = solve(root->left, dia);
    int right = solve(root->right, dia);
    dia = max(dia, left + right);
    return max(left, right) + 1;
}
int diameter(Node *root)
{
    int dia = 0;
    solve(root, dia);
    return dia + 1;
}