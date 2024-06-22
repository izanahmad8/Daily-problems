int numberOfSubarrays(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    int res = 0;
    mp[0] = 1;
    int odd = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        odd += nums[i] % 2;
        if (mp.count(odd - k))
        {
            res += mp[odd - k];
        }
        mp[odd]++;
    }
    return res;
}