void zigZag(int arr[], int n)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
        if (arr[i + 1] < arr[i + 2])
        {
            swap(arr[i + 1], arr[i + 2]);
        }
    }
}