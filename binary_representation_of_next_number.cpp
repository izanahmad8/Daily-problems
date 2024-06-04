string binaryNextNumber(string s)
{
    reverse(s.begin(), s.end());
    int carry = 1;
    for (int i = 0; i < s.size() && carry == 1; i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
            carry = 0;
        }
        else
        {
            s[i] = '0';
            carry = 1;
        }
    }
    if (carry)
    {
        s += '1';
    }
    reverse(s.begin(), s.end());
    int i = 0;
    while (s[i] == '0')
    {
        i++;
    }
    return s.substr(i, s.size());
}