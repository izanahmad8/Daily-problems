int minSubArrayLen(int target, vector<int> &nums)
{
    int min_win = INT_MAX;
    int i = 0;
    int j = 0;
    int sum = 0;
    while (j < nums.size())
    {
        sum += nums[j];
        while (sum >= target)
        {
            sum -= nums[i];
            min_win = min(min_win, j - i + 1);
            i++;
        }
        j++;
    }
    return min_win == INT_MAX ? 0 : min_win;
}