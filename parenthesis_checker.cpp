bool ispar(string x)
{
    stack<char> s;
    for (char &ch : x)
    {
        if (s.empty())
        {
            s.push(ch);
            continue;
        }
        int c = s.top();
        if ((c == '[' && ch == ']') || (c == '{' && ch == '}') || (c == '(' && ch == ')'))
        {
            s.pop();
        }
        else
        {
            s.push(ch);
        }
    }
    return s.empty();
}