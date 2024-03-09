char nthCharacter(string s, int r, int n)
{
    int mid = s.size() / 2;
    while (r--)
    {
        string temp = "";
        for (int i = 0; i < mid + 1; i++)
        {
            if (s[i] == '1')
            {
                temp += "10";
            }
            else
            {
                temp += "01";
            }
        }
        s = temp;
    }
    return s[n];
}