void immediateSmaller(vector<int> &arr, int n)
{
    vector<int> v;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            v.push_back(arr[i + 1]);
        }
        else
        {
            v.push_back(-1);
        }
    }
    v.push_back(-1);
    arr = v;
}