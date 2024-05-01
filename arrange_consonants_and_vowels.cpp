bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
struct Node *arrangeCV(Node *head)
{
    Node *vhead = NULL;
    Node *vtail = NULL;
    Node *chead = NULL;
    Node *ctail = NULL;
    Node *temp = head;
    while (temp)
    {
        if (isVowel(temp->data))
        {
            if (!vhead)
            {
                vhead = temp;
                vtail = temp;
            }
            else
            {
                vtail->next = temp;
                vtail = vtail->next;
            }
        }
        else
        {
            if (!chead)
            {
                chead = temp;
                ctail = temp;
            }
            else
            {
                ctail->next = temp;
                ctail = ctail->next;
            }
        }
        temp = temp->next;
    }
    ctail->next = NULL;
    if (!vtail)
        return chead;
    vtail->next = chead;
    return vhead;
}