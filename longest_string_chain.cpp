// top-down approach
static bool comp(string &word1, string &word2)
{
    return word1.size() < word2.size();
}
bool isPred(string &a, string &b)
{
    int m = a.size();
    int n = b.size();
    if (m >= n || n - m != 1)
    {
        return false;
    }
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] == b[j])
        {
            i++;
        }
        j++;
    }
    return i == m;
}
int solve(vector<string> &words, int i, int prev, vector<vector<int>> &dp)
{
    if (i >= words.size())
    {
        return 0;
    }
    if (dp[i][prev + 1] != -1)
    {
        return dp[i][prev + 1];
    }
    int take = 0;
    if (prev == -1 || isPred(words[prev], words[i]))
    {
        take = 1 + solve(words, i + 1, i, dp);
    }
    int noTake = solve(words, i + 1, prev, dp);
    return dp[i][prev + 1] = max(take, noTake);
}
int longestStrChain(vector<string> &words)
{
    int n = words.size();
    vector<vector<int>> dp(n + 1, vector<int>(n, -1));
    sort(begin(words), end(words), comp);
    return solve(words, 0, -1, dp);
}