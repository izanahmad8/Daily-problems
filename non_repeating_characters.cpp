char nonrepeatingCharacter(string S)
{
    unordered_map<char, int> mp;
    for (char &ch : S)
    {
        mp[ch]++;
    }
    for (char &ch : S)
    {
        if (mp[ch] == 1)
        {
            return ch;
        }
    }
    return '$';
}