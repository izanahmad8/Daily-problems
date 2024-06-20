vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
{
    vector<int> res;
    for (auto i : a)
    {
        res.push_back(i);
    }
    for (auto i : b)
    {
        res.push_back(i);
    }
    sort(res.begin(), res.end(), greater<int>());
    return res;
}