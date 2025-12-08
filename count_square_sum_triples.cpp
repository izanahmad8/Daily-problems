int countTriples(int n)
{
    vector<bool> sqt(n * n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        sqt[i * i] = true;
    }
    int cnt = 0;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            int sum = a * a + b * b;
            if (sum <= n * n && sqt[sum])
            {
                cnt++;
            }
        }
    }
    return cnt;
}