int appendCharacters(string s, string t)
{
    int i = 0, j = 0;
    while (i < s.size())
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    return t.size() - j;
}