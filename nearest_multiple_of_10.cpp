string roundToNearest(string str)
{
    int n = str.size();
    if (str[n - 1] <= '5')
    {
        str[n - 1] = '0';
        return str;
    }
    str[n - 1] = '0';
    int i = n - 2;
    while (i >= 0 && str[i] == '9')
    {
        str[i--] = '0';
    }
    if (i < 0)
    {
        return '1' + str;
    }
    else
    {
        str[i]++;
    }
    return str;
}