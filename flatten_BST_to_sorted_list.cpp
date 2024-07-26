Node *flattenBST(Node *root)
{
    if (!root)
        return NULL;
    Node *head = flattenBST(root->left);
    if (!head)
        head = root;
    else
    {
        Node *temp = head;
        while (temp && temp->right)
        {
            temp = temp->right;
        }
        temp->right = root;
    }
    root->left = NULL;
    root->right = flattenBST(root->right);
    return head;
}