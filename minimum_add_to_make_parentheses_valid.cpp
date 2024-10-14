int minAddToMakeValid(string s)
{
    int close = 0;
    int open = 0;
    for (char &ch : s)
    {
        if (ch == '(')
        {
            close++;
        }
        else if (close > 0)
        {
            close--;
        }
        else if (close == 0)
        {
            open++;
        }
    }
    return close + open;
}