vector<int> formatArray(vector<int> a, int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] < a[i - 1])
        {
            swap(a[i], a[i - 1]);
        }
    }
    return a;
}