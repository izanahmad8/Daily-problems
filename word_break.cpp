unordered_set<string> st;
bool solve(int i, string &s, vector<int> &dp)
{
    if (i >= s.size())
    {
        return true;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    if (st.find(s) != st.end())
    {
        return true;
    }
    for (int j = i; j < s.size(); j++)
    {
        string str = s.substr(i, j - i + 1);
        if (st.find(str) != st.end() && solve(j + 1, s, dp))
        {
            return dp[i] = true;
        }
    }
    return dp[i] = false;
}
int wordBreak(int n, string s, vector<string> &dictionary)
{
    vector<int> dp(s.size() + 1, -1);
    for (string &str : dictionary)
    {
        st.insert(str);
    }
    return solve(0, s, dp);
}