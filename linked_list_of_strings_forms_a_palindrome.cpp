bool compute(Node *head)
{
    string s = "";
    while (head)
    {
        s += head->data;
        head = head->next;
    }
    string rev = s;
    reverse(s.begin(), s.end());
    return rev == s;
}