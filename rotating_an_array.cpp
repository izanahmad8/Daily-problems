void leftRotate(int arr[], int n, int d)
{
    reverse(arr, arr + d);
    reverse(arr, arr + n);
    reverse(arr, arr + n - d);
}