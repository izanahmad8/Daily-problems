vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N)
{
    vector<int> ans;
    set<vector<int>> s;
    for (int i = 0; i < M; i++)
    {
        if (s.find(matrix[i]) != s.end())
        {
            ans.push_back(i);
        }
        else
        {
            s.insert(matrix[i]);
        }
    }
    return ans;
}