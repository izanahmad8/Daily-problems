vector<int> findTwoElement(vector<int> &arr)
{
    int n = arr.size();
    vector<int> v(n, 0);
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        v[arr[i] - 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            a = i + 1;
        }
        if (v[i] == 2)
        {
            b = i + 1;
        }
    }
    return {b, a};
}