vector<int> luckyNumbers(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> ans;
    vector<int> rowM;
    vector<int> columnM;
    for (int i = 0; i < n; i++)
    {
        int mini = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            mini = min(mini, matrix[i][j]);
        }
        rowM.push_back(mini);
    }
    for (int i = 0; i < m; i++)
    {
        int maxi = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            maxi = max(maxi, matrix[j][i]);
        }
        columnM.push_back(maxi);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == rowM[i] && matrix[i][j] == columnM[j])
            {
                ans.push_back(matrix[i][j]);
            }
        }
    }
    return ans;
}