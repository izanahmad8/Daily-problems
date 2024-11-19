long long maximumSubarraySum(vector<int> &nums, int k)
{
    long long sum = 0;
    unordered_map<int, int> mp;
    int i = 0;
    long long maxSum = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        sum += nums[j];
        mp[nums[j]]++;
        if (j - i + 1 > k)
        {
            mp[nums[i]]--;
            if (mp[nums[i]] == 0)
            {
                mp.erase(nums[i]);
            }
            sum -= nums[i];
            i++;
        }
        if (j - i + 1 == k && mp.size() == k)
        {
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}