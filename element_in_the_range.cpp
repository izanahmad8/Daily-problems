bool check_elements(int arr[], int n, int A, int B)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == A)
        {
            A++;
        }
        if (A > B)
        {
            return true;
        }
    }
    return false;
}
