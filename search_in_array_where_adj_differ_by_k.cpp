int search(int arr[], int n, int x, int k)
{
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            ind = i;
            break;
        }
    }
    return ind;
}