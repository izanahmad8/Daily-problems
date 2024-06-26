int findCoverage(vector<vector<int>> &matrix)
{
    int count = 0;
    int r = matrix.size();
    int c = matrix[0].size();
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == 0)
            {
                if (i >= 1)
                {
                    count += matrix[i - 1][j];
                }
                if (i < r - 1)
                {
                    count += matrix[i + 1][j];
                }
                if (j >= 1)
                {
                    count += matrix[i][j - 1];
                }
                if (j < c - 1)
                {
                    count += matrix[i][j + 1];
                }
            }
        }
    }
    return count;
}