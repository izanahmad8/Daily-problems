Node *constructLinkedMatrix(vector<vector<int>> &mat)
{
    int n = mat.size();
    Node *LL[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            LL[i][j] = new Node(mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < n - 1)
            {
                LL[i][j]->down = LL[i + 1][j];
            }
            if (j < n - 1)
            {
                LL[i][j]->right = LL[i][j + 1];
            }
        }
    }
    return LL[0][0];
}