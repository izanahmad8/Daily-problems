string firstRepChar(string s)
{
    unordered_map<char, int> m;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
        if (m[s[i]] == 2)
        {
            ans = s[i];
            return ans;
        }
    }
    return "-1";
}