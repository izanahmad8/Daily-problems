string oddEven(string s)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int x = 0, y = 0;
    for (auto it : mp)
    {
        int i = it.first - 'a';
        if ((i + 1) % 2 == 0 && it.second % 2 == 0)
        {
            x++;
        }
        else if ((i + 1) % 2 != 0 && it.second % 2 != 0)
        {
            y++;
        }
    }
    return (x + y) % 2 == 0 ? "EVEN" : "ODD";
}