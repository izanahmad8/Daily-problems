void rearrange(vector<int> &arr)
{
    int n = arr.size();
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < pos.size() || j < neg.size())
    {
        if (i < pos.size())
        {
            arr[k++] = pos[i++];
        }
        if (j < neg.size())
        {
            arr[k++] = neg[j++];
        }
    }
}