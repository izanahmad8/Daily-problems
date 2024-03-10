string removeDuplicates(string str)
{
    unordered_set<char> st;
    string ans;
    for (auto i : str)
    {
        if (st.find(i) == st.end())
        {
            st.insert(i);
            ans.push_back(i);
        }
    }
    return ans;
}