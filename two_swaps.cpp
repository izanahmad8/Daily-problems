bool checkSorted(vector<int> &arr)
{
    int i = 0;
    int j = arr.size() - 1;
    int count = 0;
    while (i < j)
    {
        if (arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
            count++;
        }
        i++;
        j--;
    }
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return count <= 2;
}