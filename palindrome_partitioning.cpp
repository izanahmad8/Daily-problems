vector<vector<string>> partition(string s)
{
    vector<vector<string>> res;
    vector<string> path;
    solve(s, 0, path, res);
    return res;
}
void solve(string s, int ind, vector<string> &path, vector<vector<string>> &res)
{
    if (ind >= s.size())
    {
        res.push_back(path);
        return;
    }
    for (int i = ind; i < s.size(); i++)
    {
        if (isPalindrome(s, ind, i))
        {
            path.push_back(s.substr(ind, i - ind + 1));
            solve(s, i + 1, path, res);
            path.pop_back();
        }
    }
}
bool isPalindrome(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start++] != s[end--])
        {
            return false;
        }
    }
    return true;
}