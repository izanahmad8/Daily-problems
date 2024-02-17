bool isMaxHeap(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[(i - 1) / 2] < arr[i])
        {
            return false;
        }
    }
    return true;
}