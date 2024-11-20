vector<int> findMajority(vector<int> &nums)
{
    map<int, int> mp;
    for (int &num : nums)
    {
        mp[num]++;
    }
    vector<int> res;
    for (auto it : mp)
    {
        if (it.second > nums.size() / 3)
        {
            res.push_back(it.first);
        }
    }
    return res;
}