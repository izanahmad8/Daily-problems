int longestPalindrome(string s)
{
    unordered_set<char> st;
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.find(s[i]) != st.end())
        {
            res += 2;
            st.erase(s[i]);
        }
        else
        {
            st.insert(s[i]);
        }
    }
    return !st.empty() ? res + 1 : res;
}