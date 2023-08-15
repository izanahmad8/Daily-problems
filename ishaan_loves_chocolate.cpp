int chocolates(int n, vector<int> &arr)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] < arr[j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return arr[i];
}