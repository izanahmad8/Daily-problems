int countNodesinLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            Node *temp = slow;
            int cnt = 1;
            while (temp->next != slow)
            {
                temp = temp->next;
                cnt++;
            }
            return cnt;
        }
    }
    return 0;
}