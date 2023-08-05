queue<int> rev(queue<int> q)
{
    stack<int> temp;
    while (q.empty() == 0)
    {
        temp.push(q.front());
        q.pop();
    }
    while (temp.empty() == 0)
    {
        q.push(temp.top());
        temp.pop();
    }
    return q;
}