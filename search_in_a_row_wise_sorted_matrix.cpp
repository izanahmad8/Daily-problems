bool searchRowMatrix(vector<vector<int>> &mat, int x)
{
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; i++)
    {
        int l = 0;
        int h = m - 1;
        while (l <= h)
        {
            int mid = l + (h - l) / 2;
            if (mat[i][mid] == x)
            {
                return true;
            }
            else if (mat[i][mid] > x)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return false;
}