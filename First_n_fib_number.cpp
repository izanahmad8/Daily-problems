vector<long long> printFibb(int n)
{
    vector<long long> res;
    res.push_back(1);
    if (n == 1 || n == 0)
    {
        return res;
    }
    res.push_back(1);
    for (int i = 2; i < n; i++)
    {
        long long calc = res[i - 1] + res[i - 2];
        res.push_back(calc);
    }
    return res;
}