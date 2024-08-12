int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> v;
    int n = arr1.size();
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
        }
        else
        {
            v.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        v.push_back(arr1[i]);
        i++;
    }
    while (j < n)
    {
        v.push_back(arr2[j]);
        j++;
    }
    int size = v.size();
    if (size % 2 == 0)
    {
        return v[size / 2] + v[size / 2 - 1];
    }
    return v[size / 2];
}