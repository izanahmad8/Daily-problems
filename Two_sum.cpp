vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int needSum = target - nums[i];
        if (mp.find(needSum) != mp.end())
        {
            return {mp[needSum], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}