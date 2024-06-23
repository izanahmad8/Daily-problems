vector<int> bracketNumbers(string str)
{
    stack<int> st;
    vector<int> ans;
    int i = 1;
    for (char ch : str)
    {
        if (ch == '(')
        {
            st.push(i);
            ans.push_back(i);
            i++;
        }
        else if (ch == ')')
        {
            ans.push_back(st.top());
            st.pop();
        }
    }
    return ans;
}