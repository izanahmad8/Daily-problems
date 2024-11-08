int minRepeats(string &s1, string &s2)
{
    string chk = s1;
    int cnt = 1;
    while (s1.size() < s2.size())
    {
        s1 += chk;
        cnt++;
    }
    if (s1.find(s2) != -1)
    {
        return cnt;
    }
    s1 += chk;
    cnt++;
    if (s1.find(s2) != -1)
    {
        return cnt;
    }
    return -1;
}