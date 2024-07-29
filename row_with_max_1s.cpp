int rowWithMax1s(vector<vector<int>> &arr)
{
    int maxCount = 0;
    int maxRow = -1;
    int n = arr.size();
    int m = arr[0].size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxRow = i;
        }
    }
    return maxRow;
}