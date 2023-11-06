stack<int> insertAtBottom(stack<int> St, int X)
{
    stack<int> tmp;
    while (!St.empty())
    {
        tmp.push(St.top());
        St.pop();
    }
    tmp.push(X);
    while (!tmp.empty())
    {
        St.push(tmp.top());
        tmp.pop();
    }
    return St;
}