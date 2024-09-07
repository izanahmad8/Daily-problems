bool solve(ListNode *head, ListNode *curr, TreeNode *root)
{
    if (!curr)
        return true;
    if (!root)
        return false;
    if (curr->val == root->val)
    {
        curr = curr->next;
    }
    else if (head->val == root->val)
    {
        head = head->next;
    }
    else
    {
        curr = head;
    }
    return solve(head, curr, root->left) || solve(head, curr, root->right);
}
bool isSubPath(ListNode *head, TreeNode *root)
{
    return solve(head, head, root);
}