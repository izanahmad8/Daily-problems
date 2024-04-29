void rearrange(int arr[], int n)
{
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
    int j = 0;
    for (int i = 0; i < max(pos.size(), neg.size()) && j < n; i++)
    {
        if (i < pos.size())
        {
            arr[j++] = pos[i];
        }
        if (i < neg.size())
        {
            arr[j++] = neg[i];
        }
    }
}