string removeZeroes(string &s)
{
    int i = 0;
    while (s[i] == '0')
    {
        i++;
    }
    return s.substr(i);
}
string addBinary(string &s1, string &s2)
{
    s1 = removeZeroes(s1);
    s2 = removeZeroes(s2);
    int n = s1.size();
    int m = s2.size();
    if (n < m)
    {
        return addBinary(s2, s1);
    }
    int j = m - 1;
    int i = n - 1;
    int carry = 0;
    string ans = "";
    while (i >= 0 || carry)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += s1[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            sum += s2[j] - '0';
            j--;
        }
        ans = char((sum % 2) + '0') + ans;
        carry = sum / 2;
    }
    return ans;
}