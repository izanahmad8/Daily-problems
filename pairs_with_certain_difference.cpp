int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
{
    int sum = 0;
    sort(arr, arr + N);
    for (int i = N - 1; i > 0; i--)
    {
        if (arr[i] - arr[i - 1] < K)
        {
            sum += arr[i] + arr[i - 1];
            i--;
        }
    }
    return sum;
}