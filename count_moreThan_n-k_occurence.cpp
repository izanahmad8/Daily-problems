int countOccurence(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto i : m)
    {
        if (i.second > n / k)
        {
            count++;
        }
    }
    return count;
}