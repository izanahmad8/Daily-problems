int multiply(int arr[], int n)
{
    int mid = n / 2;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < mid; i++)
    {
        sum1 += arr[i];
    }
    for (int i = mid; i < n; i++)
    {
        sum2 += arr[i];
    }
    return sum1 * sum2;
}