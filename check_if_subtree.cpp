void serialize(Node *root, string &s)
{
    if (!root)
    {
        s += "# ";
        return;
    }
    s += to_string(root->data) + " ";
    serialize(root->left, s);
    serialize(root->right, s);
}
bool isSubTree(Node *root1, Node *root2)
{
    string s1 = "", s2 = "";
    serialize(root1, s1);
    serialize(root2, s2);
    return (s1.find(s2) != string::npos);
}