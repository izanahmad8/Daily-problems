int firstIndex(int a[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == 1 && a[mid - 1] == 0)
        {
            return mid;
        }
        else if (a[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}