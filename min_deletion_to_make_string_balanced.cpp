int minimumDeletions(string s)
{
    stack<char> st;
    int count = 0;
    for (char ch : s)
    {
        if (st.empty())
        {
            st.push(ch);
        }
        else
        {
            if (st.top() == 'b' && ch == 'a')
            {
                st.pop();
                count++;
            }
            else
            {
                st.push(ch);
            }
        }
    }
    return count;
}