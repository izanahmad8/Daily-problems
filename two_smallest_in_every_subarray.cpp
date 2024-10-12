int pairWithMaxSum(vector<int> &arr)
{
    int n = arr.size();
    int maxSum = 0;
    if (n < 2)
        return -1;
    for (int i = 1; i < n; i++)
    {
        maxSum = max(maxSum, arr[i] + arr[i - 1]);
    }

    return maxSum;
}