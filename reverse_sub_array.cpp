void reverseSubArray(int *arr, int n, int l, int r)
{
    while (l - 1 < r - 1)
    {
        swap(arr[l - 1], arr[r - 1]);
        l++;
        r--;
    }
}