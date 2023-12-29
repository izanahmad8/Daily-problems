int kSubstrConcat(int n, string s, int k)
{
    if (n % k != 0)
    {
        return 0;
    }
    unordered_map<string, int> mp;
    string temp = "";
    temp += s[0];
    for (int i = 1; i < n; i++)
    {
        if (i % k == 0)
        {
            mp[temp]++;
            temp = "";
        }
        temp += s[i];
    }
    mp[temp]++;
    if (mp.size() > 2)
    {
        return 0;
    }
    return 1;
}