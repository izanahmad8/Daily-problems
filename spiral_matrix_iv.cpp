vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
{
    vector<vector<int>> mat(m, vector<int>(n, -1));
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    while (head)
    {
        for (int i = left; i <= right && head; i++)
        {
            mat[top][i] = head->val;
            head = head->next;
        }
        top++;
        for (int j = top; j <= bottom && head; j++)
        {
            mat[j][right] = head->val;
            head = head->next;
        }
        right--;
        for (int i = right; i >= left && head; i--)
        {
            mat[bottom][i] = head->val;
            head = head->next;
        }
        bottom--;
        for (int j = bottom; j >= top && head; j--)
        {
            mat[j][left] = head->val;
            head = head->next;
        }
        left++;
    }
    return mat;
}