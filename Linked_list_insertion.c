struct Node *insertAtBegining(struct Node *head, int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}
struct Node *insertAtEnd(struct Node *head, int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr;
    if (head == NULL)
    {
        temp->data = x;
        temp->next = NULL;
        head = temp;
        return head;
    }
    ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    temp->data = x;
    temp->next = NULL;
    ptr->next = temp;
    return head;
}