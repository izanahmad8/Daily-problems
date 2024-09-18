vector<string> uncommonFromSentences(string s1, string s2)
{
    unordered_map<string, int> mp;
    vector<string> ans;
    string str = s1 + " " + s2;
    string tmp;
    for (char &ch : str)
    {
        if (ch == ' ')
        {
            mp[tmp]++;
            tmp.erase();
        }
        else
        {
            tmp += ch;
        }
    }
    mp[tmp]++;
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}