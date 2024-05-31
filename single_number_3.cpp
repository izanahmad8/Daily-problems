vector<int> singleNumber(vector<int> &nums)
{
    unordered_map<int, int> m;
    for (auto i : nums)
    {
        m[i]++;
    }
    vector<int> ans;
    for (auto j : m)
    {
        if (j.second == 1)
        {
            ans.push_back(j.first);
        }
    }
    return ans;
}