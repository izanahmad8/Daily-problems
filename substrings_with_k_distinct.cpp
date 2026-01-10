int atMost(string &s, int k)
{
    vector<int> freq(26, 0);
    int cnt = 0;
    int res = 0;
    int i = 0;
    for (int j = 0; j < s.size(); j++)
    {
        freq[s[j] - 'a']++;
        if (freq[s[j] - 'a'] == 1)
        {
            cnt++;
        }
        while (cnt > k)
        {
            freq[s[i] - 'a']--;
            if (freq[s[i] - 'a'] == 0)
            {
                cnt--;
            }
            i++;
        }
        res += j - i + 1;
    }
    return res;
}
int countSubstr(string &s, int k)
{
    return atMost(s, k) - atMost(s, k - 1);
}