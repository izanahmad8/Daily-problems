int howManyGames(int p, int d, int m, int s)
{
    int cnt = 0;
    while (s >= p)
    {
        s -= p;
        cnt++;
        p = max(p - d, m);
    }
    return cnt;
}