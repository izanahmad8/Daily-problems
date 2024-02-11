vector<int> recamanSequence(int n)
{
    vector<int> res;
    unordered_set<int> s;
    s.insert(0);
    res.push_back(0);
    for (int i = 1; i < n; i++)
    {
        int temp = res[i - 1] - i;
        if (temp < 0 || s.find(temp) != s.end())
        {
            res.push_back(res[i - 1] + i);
            s.insert(res[i - 1] + i);
        }
        else
        {
            res.push_back(temp);
            s.insert(temp);
        }
    }
    return res;
}