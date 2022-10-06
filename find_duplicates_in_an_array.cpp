vector<int> duplicates(int arr[], int n)
{
    vector<int> res;
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            while (arr[i] == arr[i + 1])
            {
                i++;
            }
            res.push_back(arr[i]);
        }
    }
    if (res.size() == 0)
    {
        res.push_back(-1);
    }
    return res;
}