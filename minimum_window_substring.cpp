string minWindow(string s, string t)
{
    int min_len = INT_MAX;
    unordered_map<char, int> mp;
    for (char &ch : t)
    {
        mp[ch]++;
    }
    int countReq = t.size();
    int i = 0;
    int j = 0;
    int start_i = 0;
    while (j < s.size())
    {
        if (mp[s[j]] > 0)
        {
            countReq--;
        }
        mp[s[j]]--;
        while (countReq == 0)
        {
            int window = j - i + 1;
            if (min_len > window)
            {
                min_len = window;
                start_i = i;
            }
            mp[s[i]]++;
            if (mp[s[i]] > 0)
            {
                countReq++;
            }
            i++;
        }
        j++;
    }
    return min_len == INT_MAX ? "" : s.substr(start_i, min_len);
}