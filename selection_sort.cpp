int select(int arr[], int i, int n)
{
    int min_ind = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[min_ind])
        {
            min_ind = j;
        }
    }
    return min_ind;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sel = select(arr, i, n);
        swap(arr[i], arr[sel]);
    }
}