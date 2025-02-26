int search(vector<int> &arr, int key)
{
    int l = 0, h = arr.size() - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[l] <= arr[mid])
        {
            if (arr[l] <= key && arr[mid] > key)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < key && arr[h] >= key)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}