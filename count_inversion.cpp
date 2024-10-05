long long int mergeSort(vector<long long> &arr, int l, int h)
{
    long long int cnt = 0;
    if (l < h)
    {
        int m = l + (h - l) / 2;
        cnt += mergeSort(arr, l, m);
        cnt += mergeSort(arr, m + 1, h);
        cnt += merge(arr, l, m, h);
    }
    return cnt;
}
long long int merge(vector<long long> &arr, int l, int mid, int h)
{
    int n = mid - l + 1;
    int m = h - mid;
    vector<long long> left(n), right(m);
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
    long long int cnt = 0;
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
long long int inversionCount(vector<long long> &arr)
{
    int l = 0;
    int h = arr.size() - 1;
    long long int count = mergeSort(arr, l, h);
    return count;
}