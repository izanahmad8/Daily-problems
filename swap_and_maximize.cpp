long long int maxSum(int arr[], int n)
{
    long long int sum = 0;
    sort(arr, arr + n);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        sum += abs(arr[i] - arr[j]) + abs(arr[i + 1] - arr[j]);
        i++;
        j--;
    }
    sum += abs(arr[i] - arr[0]);
    return sum;
}