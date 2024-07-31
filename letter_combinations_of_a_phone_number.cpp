vector<string> res;
void solve(int ind, string digits, unordered_map<char, string> &mp, string tmp)
{
    if (ind >= digits.size())
    {
        res.push_back(tmp);
        return;
    }
    string s = mp[digits[ind]];
    for (int i = 0; i < s.size(); i++)
    {
        tmp.push_back(s[i]);
        solve(ind + 1, digits, mp, tmp);
        tmp.pop_back();
    }
}
vector<string> letterCombinations(string digits)
{
    string tmp = "";
    unordered_map<char, string> mp{
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}};
    if (digits.empty())
    {
        return res;
    }
    solve(0, digits, mp, tmp);
    return res;
}