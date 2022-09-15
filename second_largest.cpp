int print2largest(int arr[], int n)
{
    int ans = -1;
    sort(arr, arr + n);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[n - 1] != arr[i])
        {
            ans = arr[i];
            break;
        }
    }
    return ans;
}