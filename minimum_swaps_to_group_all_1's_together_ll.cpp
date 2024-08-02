int minSwaps(vector<int> &nums)
{
    int n = nums.size();
    int totalOnes = count(nums.begin(), nums.end(), 1);
    int currOnes = count(nums.begin(), nums.begin() + totalOnes, 1);
    int minSwap = totalOnes - currOnes;
    int i = 0, j = totalOnes - 1;
    while (j < 2 * n - 1)
    {
        j++;
        if (nums[j % n])
        {
            currOnes++;
        }
        if (nums[i % n])
        {
            currOnes--;
        }
        i++;
        minSwap = min(minSwap, totalOnes - currOnes);
    }
    return minSwap;
}