int countRev(string s)
{
    int count = 0;
    stack<char> st;
    if (s.size() % 2 == 1)
        return -1;
    for (char i : s)
    {
        if (i == '{')
        {
            st.push(i);
        }
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(i);
            }
        }
    }
    while (!st.empty())
    {
        char a = st.top();
        st.pop();
        char b = st.top();
        st.pop();
        if (a == b)
        {
            count += 1;
        }
        else
        {
            count += 2;
        }
    }
    return count;
}