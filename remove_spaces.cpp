string removeSpaces(string &s)
{
    int i = 0, j = 0;
    while (i < s.size())
    {
        if (s[i] != ' ')
        {
            s[j++] = s[i];
        }
        i++;
    }
    return s.substr(0, j);
}