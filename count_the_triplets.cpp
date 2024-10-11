int countTriplet(int arr[], int n)
{
    int count = 0;
    sort(arr, arr + n);
    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0;
        int h = i - 1;
        while (l < h)
        {
            int sum = arr[l] + arr[h];
            if (sum == arr[i])
            {
                count++;
                l++;
                h--;
            }
            else if (sum < arr[i])
            {
                l++;
            }
            else
            {
                h--;
            }
        }
    }
    return count;
}