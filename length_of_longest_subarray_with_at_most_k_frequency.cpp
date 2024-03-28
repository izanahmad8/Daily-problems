int maxSubarrayLength(vector<int> &nums, int k)
{
    int n = nums.size();
    int result = 0;
    int i = 0, j = 0;
    unordered_map<int, int> mp;
    while (j < n)
    {
        mp[nums[j]]++;
        while (i < j && mp[nums[j]] > k)
        {
            mp[nums[i]]--;
            i++;
        }
        result = max(result, j - i + 1);
        j++;
    }
    return result;
}