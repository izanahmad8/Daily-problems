bool isMonotonic(vector<int> &nums)
{
    bool check = false;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1])
        {
            check = true;
            break;
        }
    }
    if (check == false)
    {
        return true;
    }
    check = false;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > nums[i - 1])
        {
            check = true;
            break;
        }
    }
    if (check == true)
    {
        return false;
    }
    return true;
}