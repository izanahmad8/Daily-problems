bool wifiRange(int N, string S, int X)
{
    int left = -1;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == '1')
        {
            if (i - X > left + 1)
            {
                return false;
            }
            left = i + X;
        }
    }
    if (left < N - 1)
    {
        return false;
    }
    return true;
}