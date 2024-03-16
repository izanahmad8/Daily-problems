void deleteNode(Node *del)
{
    del->data = del->next->data;
    del->next = del->next->next;
}
void deleteNode(Node *del_node)
{
    Node *curr = del_node;
    curr->data = curr->next->data;
    curr->next = curr->next->next;
}