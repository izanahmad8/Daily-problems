void nextGreatest(int arr[], int n)
{
    int maxi = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = arr[i];
        arr[i] = maxi;
        maxi = max(maxi, temp);
    }
}