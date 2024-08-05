void solve(int ind, vector<int> &nums, int k, unordered_map<int, int> &mp, int &count)
{
    if (ind >= nums.size())
    {
        count++;
        return;
    }
    // notake
    solve(ind + 1, nums, k, mp, count);
    // take
    if (!mp[nums[ind] - k] && !mp[nums[ind] + k])
    {
        mp[nums[ind]]++;
        solve(ind + 1, nums, k, mp, count);
        mp[nums[ind]]--;
    }
}
int beautifulSubsets(vector<int> &nums, int k)
{
    int count = 0;
    unordered_map<int, int> mp;
    solve(0, nums, k, mp, count);
    return count - 1; // exclude empty subset
}