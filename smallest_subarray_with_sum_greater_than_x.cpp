int smallestSubWithSum(int arr[], int n, int x)
{
    int sum = 0;
    int ans = INT_MAX;
    int i = 0, j = 0;
    while (j < n)
    {
        sum += arr[j];
        while (sum > x)
        {
            ans = min(ans, j - i + 1);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    return ans != INT_MAX ? ans : 0;
}