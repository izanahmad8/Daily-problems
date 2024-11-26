int circularSubarraySum(vector<int> &arr)
{
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    int sum = arr[0];
    int minSum = arr[0];
    int currSum = arr[0];
    int maxSum = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        currSum = max(currSum + arr[i], arr[i]);
        maxSum = max(maxSum, currSum);
        sum = min(sum + arr[i], arr[i]);
        minSum = min(minSum, sum);
    }
    int circularSum = totalSum - minSum;
    if (totalSum == minSum)
    {
        return maxSum;
    }
    return max(maxSum, circularSum);
}