int missingNumber(int arr[], int n)
{
    int count = 1;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == count)
        {
            count++;
        }
    }
    return count;
}