int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int sum = INT_MAX / 2;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {
            int curr_sum = nums[i] + nums[j] + nums[k];
            if (abs(curr_sum - target) < abs(sum - target))
            {
                sum = curr_sum;
            }
            if (curr_sum < target)
            {
                j++;
            }
            else if (curr_sum > target)
            {
                k--;
            }
            else
            {
                return sum;
            }
        }
    }
    return sum;
}