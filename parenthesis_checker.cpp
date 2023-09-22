bool ispar(string x)
{
    stack<char> s;
    for (int i = 0; i < x.size(); i++)
    {
        if (s.empty())
        {
            s.push(x[i]);
            continue;
        }
        int c = s.top();
        if ((c == '[' && x[i] == ']') || (c == '{' && x[i] == '}') || (c == '(' && x[i] == ')'))
        {
            s.pop();
        }
        else
        {
            s.push(x[i]);
        }
    }
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}