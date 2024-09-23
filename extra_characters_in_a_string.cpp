int solve(int i, string &s, unordered_set<string> &st, vector<int> &dp)
{
    if (i >= s.size())
    {
        return 0;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int take = 1 + solve(i + 1, s, st, dp);
    for (int j = i; j < s.size(); j++)
    {
        string str = s.substr(i, j - i + 1);
        if (st.find(str) != st.end())
        {
            take = min(take, solve(j + 1, s, st, dp));
        }
    }
    return dp[i] = take;
}
int minExtraChar(string s, vector<string> &dictionary)
{
    int n = s.size();
    vector<int> dp(n + 1, -1);
    unordered_set<string> st(begin(dictionary), end(dictionary));
    return solve(0, s, st, dp);
}