char *reverse(char *S, int len)
{
    stack<char> c;
    for (int i = 0; i < len; i++)
    {
        c.push(S[i]);
    }
    int i = 0;
    while (!c.empty())
    {
        S[i] = c.top();
        c.pop();
        i++;
    }
    return S;
}