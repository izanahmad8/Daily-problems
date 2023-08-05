void deleteMid(stack<int> &s, int sizeOfStack)
{
    stack<int> temp;
    while (temp.size() != sizeOfStack / 2)
    {
        temp.push(s.top());
        s.pop();
    }
    s.pop();
    while (temp.empty() == 0)
    {
        s.push(temp.top());
        temp.pop();
    }
}