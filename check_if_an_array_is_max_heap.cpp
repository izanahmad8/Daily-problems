bool isMaxHeap(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i <= (n - 2) / 2; i++)
    {
        if (arr[2 * i + 1] > arr[i])
            return false;
        if (arr[2 * i + 2] > arr[i] && 2 * i + 2 < n)
            return false;
    }
    return true;
}