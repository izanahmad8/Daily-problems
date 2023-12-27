int jump(vector<int> &nums)
{
    int maxi = 0;
    int maxR = 0;
    int jumps = 0;
    if (nums.size() == 1)
    {
        return 0;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        maxi = max(maxi, i + nums[i]);
        if (i == maxR)
        {
            maxR = maxi;
            jumps++;
            if (maxR >= nums.size() - 1)
            {
                return jumps;
            }
        }
    }
    return -1;
}