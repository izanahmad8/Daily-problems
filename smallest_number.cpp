string smallestNumber(int s, int d)
{
    if (s > 9 * d)
        return "-1";
    string ans = "";
    for (int i = 1; i <= d; i++)
    {
        int start = (i == 1 ? 1 : 0);
        int tmp = max(start, s - (d - i) * 9);
        ans += ('0' + tmp);
        s -= tmp;
    }
    return ans;
}