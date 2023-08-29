void sortColors(vector<int> &nums)
{
    int cred = 0, cblue = 0, cwhite = 0;
    int red = 0, blue = 0, white = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            cred++;
        }
        else if (nums[i] == 1)
        {
            cblue++;
        }
        else
        {
            cwhite++;
        }
    }
    red = cred;
    blue = cred + cblue;
    white = cred + cblue + cwhite;
    for (int i = 0; i < red; i++)
    {
        nums[i] = 0;
    }
    for (int i = cred; i < blue; i++)
    {
        nums[i] = 1;
    }
    for (int i = cred + cblue; i < white; i++)
    {
        nums[i] = 2;
    }
}