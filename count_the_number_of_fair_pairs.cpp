long long countFairPairs(vector<int> &nums, int lower, int upper)
{
    sort(nums.begin(), nums.end());
    long long count = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        auto low = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]);
        auto up = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]);
        count += up - low;
    }
    return count;
}