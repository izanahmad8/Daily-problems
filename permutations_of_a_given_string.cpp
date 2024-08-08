vector<string> res;
void solve(string &S, string &tmp, unordered_map<char, int> &mp)
{
    if (tmp.size() == S.size())
    {
        res.push_back(tmp);
        return;
    }
    for (auto it : mp)
    {
        char ch = it.first;
        int count = it.second;
        if (count > 0)
        {
            mp[ch]--;
            tmp.push_back(ch);
            solve(S, tmp, mp);
            mp[ch]++;
            tmp.pop_back();
        }
    }
}
vector<string> find_permutation(string S)
{
    unordered_map<char, int> mp;
    for (char &ch : S)
    {
        mp[ch]++;
    }
    string tmp = "";
    solve(S, tmp, mp);
    return res;
}