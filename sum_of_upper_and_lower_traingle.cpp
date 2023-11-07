vector<int> sumTriangles(const vector<vector<int>> &matrix, int n)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            sum1 += matrix[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < j + 1; i++)
        {
            sum2 += matrix[i][j];
        }
    }
    return {sum2, sum1};
}