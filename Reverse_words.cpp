string reverseWords(string S)
{
    stack<string> st;
    string ans;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '.')
        {
            st.push(ans);
            ans.erase();
        }
        else
        {
            ans += S[i];
            if (i == S.size() - 1)
            {
                st.push(ans);
                ans.erase();
            }
        }
    }
    ans.erase();
    while (!st.empty())
    {
        ans += st.top() + '.';
        st.pop();
    }
    ans.pop_back();
    return ans;
}