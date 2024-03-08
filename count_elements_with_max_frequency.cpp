int maxFrequencyElements(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (auto i : nums)
    {
        mp[i]++;
    }
    int maxi = INT_MIN;
    int count = 0;
    for (auto i : mp)
    {
        if (i.second > maxi)
        {
            maxi = max(maxi, i.second);
        }
    }
    for (auto i : mp)
    {
        if (maxi == i.second)
        {
            count += i.second;
        }
    }
    return count;
}