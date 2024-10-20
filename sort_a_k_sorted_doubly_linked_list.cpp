DLLNode *sortAKSortedDLL(DLLNode *head, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    DLLNode *curr = head;
    DLLNode *temp = head;
    while (temp)
    {
        pq.push(temp->data);
        if (pq.size() > k)
        {
            curr->data = pq.top();
            pq.pop();
            curr = curr->next;
        }
        temp = temp->next;
    }
    while (!pq.empty())
    {
        curr->data = pq.top();
        pq.pop();
        curr = curr->next;
    }
    return head;
}