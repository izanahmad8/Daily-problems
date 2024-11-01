int marsExploration(string s)
{
    string pattern = "SOS";
    int cnt = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != pattern[i % 3])
        {
            cnt++;
        }
    }
    return cnt;
}