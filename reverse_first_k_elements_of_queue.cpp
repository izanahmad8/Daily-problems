queue<int> modifyQueue(queue<int> q, int k)
{
    queue<int> ans;
    stack<int> s;
    for (int i = 0; i < k; i++)
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