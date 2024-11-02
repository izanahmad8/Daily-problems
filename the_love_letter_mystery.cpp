int theLoveLetterMystery(string s)
{
    int cnt = 0;
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        cnt += abs(s[i] - s[n - i - 1]);
    }
    return cnt;
}