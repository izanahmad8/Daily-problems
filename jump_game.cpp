bool canJump(vector<int> &nums)
{
    int maxi = 0;
    int maxR = 0;
    if (nums.size() == 1)
    {
        return true;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        maxi = max(maxi, i + nums[i]);
        if (i == maxR)
        {
            maxR = maxi;
            if (maxR >= nums.size() - 1)
            {
                return true;
            }
        }
    }
    return false;
}