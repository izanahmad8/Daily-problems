int maxWidthRamp(vector<int> &nums)
{
    int n = nums.size();
    int ramp = 0;
    vector<int> right(n);
    right[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(nums[i], right[i + 1]);
    }
    int i = 0;
    int j = 0;
    while (j < n)
    {
        while (i < j && nums[i] > right[j])
        {
            i++;
        }
        ramp = max(ramp, j - i);
        j++;
    }
    return ramp;
}