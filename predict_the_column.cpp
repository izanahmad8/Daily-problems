int columnWithMaxZeros(vector<vector<int>> arr, int N)
{
    int max = 0;
    int col = -1;
    for (int i = 0; i < arr[0].size(); i++)
    {
        int temp = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j][i] == 0)
                temp++;
        }
        if (max < temp)
        {
            max = temp;
            col = i;
        }
    }
    return col;
}