int thirdMax(vector<int> &nums)
{
    set<int, greater<int>> s;
    for (auto i : nums)
    {
        s.insert(i);
    }
    if (s.size() < 3)
    {
        auto it = s.begin();
        return *it;
    }
    auto it = next(s.begin(), 2);
    return *it;
}