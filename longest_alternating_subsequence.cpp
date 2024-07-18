int alternatingMaxLength(vector<int> &arr)
{
    if (arr.size() == 0)
        return 0;
    int forw = 1;
    int back = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[i - 1])
        {
            forw = back + 1;
        }
        else if (arr[i] < arr[i - 1])
        {
            back = forw + 1;
        }
    }
    return max(forw, back);
}