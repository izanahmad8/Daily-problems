int mergeSort(vector<int> &arr, int l, int h)
{
    int cnt = 0;
    if (l < h)
    {
        int m = l + (h - l) / 2;
        cnt += mergeSort(arr, l, m);
        cnt += mergeSort(arr, m + 1, h);
        cnt += merge(arr, l, m, h);
    }
    return cnt;
}
int merge(vector<int> &arr, int l, int mid, int h)
{
    int n = mid - l + 1;
    int m = h - mid;
    vector<int> left(n), right(m);
    int k = l;
    for (int i = 0; i < n; i++)
    {
        left[i] = arr[k++];
    }
    for (int j = 0; j < m; j++)
    {
        right[j] = arr[k++];
    }
    int i = 0, j = 0;
    k = l;
    int cnt = 0;
    while (i < n && j < m)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
            cnt += (n - i);
        }
    }
    while (i < n)
    {
        arr[k++] = left[i++];
    }
    while (j < m)
    {
        arr[k++] = right[j++];
    }
    return cnt;
}
int inversionCount(vector<int> &arr)
{
    int l = 0;
    int h = arr.size() - 1;
    int count = mergeSort(arr, l, h);
    return count;
}