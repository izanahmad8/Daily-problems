string reverseParentheses(string s)
{
    stack<int> st;
    string res = "";
    for (char i : s)
    {
        if (i == '(')
        {
            st.push(res.size());
        }
        else if (i == ')')
        {
            int ind = st.top();
            st.pop();
            reverse(res.begin() + ind, res.end());
        }
        else
        {
            res += i;
        }
    }
    return res;
}