bool canAttend(vector<vector<int>> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 1; i < arr.size(); i++)
    {
        int end = arr[i - 1][1];
        int start = arr[i][0];
        if (start < end)
        {
            return false;
        }
    }
    return true;
}