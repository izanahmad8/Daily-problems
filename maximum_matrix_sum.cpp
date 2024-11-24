long long maxMatrixSum(vector<vector<int>> &matrix)
{
    int neg = 0;
    int mini = INT_MAX;
    long long sum = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] < 0)
            {
                neg++;
            }
            int ab = abs(matrix[i][j]);
            mini = min(mini, ab);
            sum += ab;
        }
    }
    if (neg % 2 == 0)
    {
        return sum;
    }
    return sum - 2 * mini;
}