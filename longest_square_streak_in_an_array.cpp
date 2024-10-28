int longestSquareStreak(vector<int> &nums)
{
    unordered_map<int, int> mp;
    sort(nums.begin(), nums.end());
    int maxLen = -1;
    for (int &num : nums)
    {
        int x = sqrt(num);
        if (x * x == num && mp.find(x) != mp.end())
        {
            mp[num] = mp[x] + 1;
            maxLen = max(maxLen, mp[num]);
        }
        else
        {
            mp[num] = 1;
        }
    }
    return maxLen;
}