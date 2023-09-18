int firstElement(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (m[arr[i]] == k)
        {
            return arr[i];
        }
    }
    return -1;
}