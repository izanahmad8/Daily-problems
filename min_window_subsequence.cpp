int solve(int i, int j, string &s1, string &s2, vector<vector<int>> &dp)
{
    if (j == s2.size())
        return i - 1;
    if (i == s1.size())
        return INT_MAX;
    if (dp[i][j] != -1)
        return dp[i][j];
    int skip = solve(i + 1, j, s1, s2, dp);
    int take = INT_MAX;
    if (s1[i] == s2[j])
    {
        take = solve(i + 1, j + 1, s1, s2, dp);
    }
    return dp[i][j] = min(skip, take);
}
string minWindow(string &s1, string &s2)
{
    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    int start = -1;
    int minLen = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[0])
        {
            int end = solve(i, 0, s1, s2, dp);
            if (end != INT_MAX)
            {
                int len = end - i + 1;
                if (len < minLen)
                {
                    minLen = len;
                    start = i;
                }
            }
        }
    }
    if (start == -1)
        return "";
    return s1.substr(start, minLen);
}