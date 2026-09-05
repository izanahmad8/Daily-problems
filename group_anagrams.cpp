vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> res;
    map<vector<int>, vector<string>> mp;
    for (string &s : strs)
    {
        vector<int> freq(26, 0);
        for (char &ch : s)
        {
            freq[ch - 'a']++;
        }
        mp[freq].push_back(s);
    }
    for (auto &it : mp)
    {
        res.push_back(it.second);
    }
    return res;
}