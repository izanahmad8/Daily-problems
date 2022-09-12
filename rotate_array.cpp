void rotateArr(int arr[], int d, int n)
{
    d = d % n;
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}