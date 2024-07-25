void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int p = partition(arr, low, high);
    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int pi = low;
    for (int i = low; i < high; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[pi]);
            pi++;
        }
    }
    swap(arr[pi], arr[high]);
    return pi;
}