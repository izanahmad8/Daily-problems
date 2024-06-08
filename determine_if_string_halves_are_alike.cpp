bool halvesAreAlike(string s)
{
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isVowel(s[i]))
        {
            if (i < s.size() / 2)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
    }
    return a == b;
}
bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}