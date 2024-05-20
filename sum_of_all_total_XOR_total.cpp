int subsetXORSum(vector<int> &nums)
{
    return dfs(nums, 0, 0);
}
int dfs(vector<int> &nums, int i, int curr)
{
    if (i == nums.size())
        return curr;
    int include = dfs(nums, i + 1, curr ^ nums[i]);
    int exclude = dfs(nums, i + 1, curr);
    return include + exclude;
}