int majorityElement(int a[], int size)
{
    unordered_map<int, int> m;
    for (int i = 0; i < size; i++)
    {
        m[a[i]]++;
        if (m[a[i]] > size / 2)
        {
            return a[i];
        }
    }
    return -1;
}