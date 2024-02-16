int mostFrequentEven(vector<int> &nums)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    int max = INT_MIN;
    for (auto i : mp)
    {
        if (i.first % 2 == 0 && i.second > max)
        {
            max = i.second;
        }
    }
    for (auto i : mp)
    {
        if (max == i.second && i.first % 2 == 0)
        {
            return i.first;
        }
    }
    return -1;
}