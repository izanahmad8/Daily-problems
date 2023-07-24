class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (target > nums[nums.size() - 1])
        {
            return nums.size();
        }
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            int m = l + (r - l) / 2;
            if (nums[m] >= target)
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        return l;
    }
};