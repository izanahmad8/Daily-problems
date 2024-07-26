bool kPangram(string str, int k)
{
    unordered_map<char, int> mp;
    int length = 0;
    int unique = 0;
    for (auto it : str)
    {
        if (it == ' ')
            continue;
        mp[it - 'a']++;
        if (mp[it - 'a'] == 1)
        {
            unique++;
        }
        length++;
    }
    if (length < 26)
        return false;
    return (unique + k) >= 26;
}