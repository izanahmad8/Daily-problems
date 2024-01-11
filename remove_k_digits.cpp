string removeKdigits(string S, int K)
{
    stack<char> s;
    for (int i = 0; i < S.size(); i++)
    {
        while (K > 0 && !s.empty() && s.top() > S[i])
        {
            s.pop();
            K--;
        }
        s.push(S[i]);
    }
    if (s.empty())
    {
        return "0";
    }
    while (K > 0)
    {
        s.pop();
        K--;
    }
    string ans = "";
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    int i = 0;
    while (ans[i] == '0')
    {
        i++;
    }
    if (i == ans.size())
    {
        return "0";
    }
    else
    {
        return ans.substr(i);
    }
}