string smallestWindow(string s, string p)
{
    int min_len = INT_MAX;
    vector<int> freq(26, 0);
    for (char &ch : p)
    {
        freq[ch - 'a']++;
    }
    int countReq = p.size();
    int i = 0;
    int j = 0;
    int start_i = 0;
    while (j < s.size())
    {
        char ch = s[j];
        if (freq[ch - 'a'] > 0)
        {
            countReq--;
        }
        freq[ch - 'a']--;
        while (countReq == 0)
        {
            int window = j - i + 1;
            if (min_len > window)
            {
                min_len = window;
                start_i = i;
            }
            char ch = s[i];
            freq[ch - 'a']++;
            if (freq[ch - 'a'] > 0)
            {
                countReq++;
            }
            i++;
        }
        j++;
    }
    return min_len == INT_MAX ? "-1" : s.substr(start_i, min_len);
}