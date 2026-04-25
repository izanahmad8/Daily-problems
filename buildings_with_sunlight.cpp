int visibleBuildings(vector<int> &arr)
{
    int count = 1;
    int maxHeight = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] >= maxHeight)
        {
            count++;
            maxHeight = arr[i];
        }
    }
    return count;
}
