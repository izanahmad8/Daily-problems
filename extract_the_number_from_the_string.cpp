long long ExtractNumber(string sentence)
{
    long long ans = 0;
    long long temp = 0;
    for (char ch : sentence)
    {
        if (ch >= '0' && ch <= '8')
        {
            temp = temp * 10 + (ch - '0');
        }
        else if (ch == ' ')
        {
            ans = max(ans, temp);
            temp = 0;
        }
    }
    return ans == 0 ? -1 : ans;
}