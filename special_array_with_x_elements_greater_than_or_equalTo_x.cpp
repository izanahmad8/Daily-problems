int specialArray(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int x = 0; x <= nums.size(); x++)
    {
        int ind = lower_bound(begin(nums), end(nums), x) - begin(nums); // find the number of the index which is greater than or equal to x
        int count = nums.size() - ind;
        if (count == x)
            return x;
    }
    return -1;
}