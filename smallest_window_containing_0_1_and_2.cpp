int smallestSubstring(string S)
{
    int zero = -1;
    int one = -1;
    int two = -1;
    int ans = INT_MAX;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '0')
        {
            zero = i;
        }
        if (S[i] == '1')
        {
            one = i;
        }
        if (S[i] == '2')
        {
            two = i;
        }
        if (zero != -1 && one != -1 && two != -1)
        {
            ans = min(ans, i + 1 - min(zero, min(one, two)));
        }
    }
    if (ans != INT_MAX)
    {
        return ans;
    }
    return -1;
}