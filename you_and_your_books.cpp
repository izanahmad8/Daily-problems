long long max_Books(int arr[], int n, int k)
{
    long long sum = 0;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            sum += arr[i];
        }
        else
        {
            sum = 0;
        }
        ans = max(ans, sum);
    }
    return ans;
}