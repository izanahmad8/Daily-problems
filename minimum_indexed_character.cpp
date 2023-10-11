int minIndexChar(string str, string patt)
{
    unordered_map<char, int> m;
    for (int i = 0; i < patt.size(); i++)
    {
        m[patt[i]]++;
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (m.find(str[i]) != m.end())
        {
            return i;
        }
    }
    return -1;
}