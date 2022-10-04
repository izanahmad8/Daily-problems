vector<int> subarraySum(int arr[], int n, long long s)
{
    long long curr_sum = arr[0], x = 0;
    for (int i = 1; i <= n; i++)
    {
        while (curr_sum > s && x < i - 1)
        {
            curr_sum -= arr[x];
            x++;
        }
        if (curr_sum == s)
        {
            return {x + 1, i};
        }
        if (x < n)
        {
            curr_sum += arr[i];
        }
    }
    return {-1};
}