int maxRepeating(int *arr, int n, int k)
{
    unordered_map<int, int> m;
    int max = INT_MIN, res = 0;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (int i = 0; i < k; i++)
    {
        if (m[i] > max)
        {
            max = m[i];
            res = i;
        }
    }
    return res;
}