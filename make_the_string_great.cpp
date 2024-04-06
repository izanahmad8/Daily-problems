string makeGood(string s)
{
    stack<char> st;
    string res;
    for (auto c : s)
    {
        if (!st.empty() && abs(c - st.top()) == 32)
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    while (!st.empty())
    {
        res = st.top() + res;
        st.pop();
    }
    return res;
}