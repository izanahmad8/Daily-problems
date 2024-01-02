bool canPair(vector<int> nums, int k)
{
    int n = nums.size();
    if (n % 2 != 0)
    {
        return false;
    }
    else
    {
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x = nums[i] % k;
            m[x]++;
            m[(k - x) % k]--;
        }
        for (auto i : m)
        {
            if (i.second > 0)
            {
                return false;
            }
        }
    }
    return true;
}