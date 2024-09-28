int lengthOfLongestSubstring(string s)
{
    int max_len = 0;
    int i = 0;
    int j = 0;
    unordered_map<char, int> mp;
    while (j < s.size())
    {
        if (mp[s[j]] == 0)
        {
            mp[s[j]]++;
            max_len = max(max_len, j - i + 1);
        }
        else
        {
            while (mp[s[j]])
            {
                mp[s[i]]--;
                i++;
            }
            mp[s[j]]++;
        }
        j++;
    }
    return max_len;
}