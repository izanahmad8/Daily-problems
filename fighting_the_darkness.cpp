int maxDays(int arr[], int n)
{
    int day = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > day)
        {
            day = arr[i];
        }
    }
    return day;
}