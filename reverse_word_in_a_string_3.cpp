string reverseWords(string s)
{
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            reverse(s.begin() + j, s.begin() + i);
            j = i + 1;
        }
        if (i == s.size() - 1)
        {
            reverse(s.begin() + j, s.end());
        }
    }
    return s;
}