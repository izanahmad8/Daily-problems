queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> s;
    queue<int> ans;
    while (k--)
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        ans.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        ans.push(q.front());
        q.pop();
    }
    return ans;
}