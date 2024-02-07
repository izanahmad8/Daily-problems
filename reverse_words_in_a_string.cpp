string reverseWords(string s)
{
    string res;
    int i = 0;
    int n = s.length();
    while (i < n)
    {
        string temp = "";
        while (i < n && s[i] == ' ')
            i++;
        while (i < n && s[i] != ' ')
        {
            temp += s[i];
            i++;
        }
        if (temp.size() > 0)
        {
            if (res.size() == 0)
            {
                res = temp;
            }
            else
            {
                res = temp + " " + res;
            }
        }
    }
    return res;
}