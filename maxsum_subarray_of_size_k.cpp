long maximumSumSubarray(int K, vector<int> &Arr, int N)
{
    long maxSum = 0;
    long sum = 0;
    for (int i = 0; i < K; i++)
    {
        sum += Arr[i];
    }
    maxSum = sum;
    for (int i = K; i < N; i++)
    {
        sum += Arr[i] - Arr[i - K];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}