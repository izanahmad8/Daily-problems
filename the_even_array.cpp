int convertToEven(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'O' && s[i + 1] != 'O')
        {
            ans++;
        }
    }
    return ans;
}