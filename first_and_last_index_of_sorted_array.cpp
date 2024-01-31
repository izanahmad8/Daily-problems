vector<int> searchRange(vector<int> &nums, int target)
{
    int first = firstInd(nums, target);
    int last = lastInd(nums, target);
    return {first, last};
}
int firstInd(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;
    int first = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            r = mid - 1;
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return first;
}
int lastInd(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;
    int last = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            l = mid + 1;
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return last;
}