long long solve(vector<int> &bt)
{
    long long wt = 0, temp = 0;
    sort(bt.begin(), bt.end());
    for (int i = 0; i < bt.size() - 1; i++)
    {
        temp += bt[i];
        wt += temp;
    }
    return floor(wt / bt.size());
}