int countPairsWithDiffK(vector<int> &arr, int k)
{
    unordered_map<int, int> mp;
    int count = 0;
    for (int &x : arr)
    {
        mp[x]++;
    }
    for (auto &ele : mp)
    {
        if (mp.find(ele.first + k) != mp.end())
        {
            count += (ele.second * mp[ele.first + k]);
        }
    }
    return count;
}